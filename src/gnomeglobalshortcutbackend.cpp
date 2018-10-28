/* $BEGIN_LICENSE

This file is part of Musique.
Copyright 2013, Flavio Tordini <flavio.tordini@gmail.com>

Musique is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Musique is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Musique.  If not, see <http://www.gnu.org/licenses/>.

$END_LICENSE */

#include "gnomeglobalshortcutbackend.h"
#include "globalshortcuts.h"
#include "constants.h"

#include <QAction>
#include <QtDebug>

#ifdef QT_DBUS_LIB
#  include <QtDBus>
#endif

const char* GnomeGlobalShortcutBackend::kGsdService = "org.gnome.SettingsDaemon";
const char* GnomeGlobalShortcutBackend::kGsdPath = "/org/gnome/SettingsDaemon/MediaKeys";
const char* GnomeGlobalShortcutBackend::kGsdInterface = "org.gnome.SettingsDaemon.MediaKeys";

GnomeGlobalShortcutBackend::GnomeGlobalShortcutBackend(GlobalShortcuts* parent)
    : GlobalShortcutBackend(parent),
      interface_(nullptr) { }

bool GnomeGlobalShortcutBackend::IsGsdAvailable() {
#ifdef QT_DBUS_LIB
    return QDBusConnection::sessionBus().interface()->isServiceRegistered(
                GnomeGlobalShortcutBackend::kGsdService);
#else // QT_DBUS_LIB
    return false;
#endif
}

bool GnomeGlobalShortcutBackend::DoRegister() {
    // qDebug() << __PRETTY_FUNCTION__;
#ifdef QT_DBUS_LIB
    // Check if the GSD service is available
    if (!QDBusConnection::sessionBus().interface()->isServiceRegistered(kGsdService))
        return false;

    if (!interface_) {
        interface_ = new QDBusInterface(
                    kGsdService, kGsdPath, kGsdInterface, QDBusConnection::sessionBus(), this);
    }

    QDBusMessage reply = interface_->call("GrabMediaPlayerKeys", Constants::NAME, (unsigned int) 0);
    if (reply.type() == QDBusMessage::ErrorMessage) {
        qWarning() << "Failed to grab media player keys. Error:" << reply.errorMessage();
    }

    connect(interface_, SIGNAL(MediaPlayerKeyPressed(QString,QString)),
            this, SLOT(GnomeMediaKeyPressed(QString,QString)));

    return true;
#else // QT_DBUS_LIB
    return false;
#endif
}

void GnomeGlobalShortcutBackend::DoUnregister() {

#ifdef QT_DBUS_LIB
    // Check if the GSD service is available
    if (!QDBusConnection::sessionBus().interface()->isServiceRegistered(kGsdService))
        return;
    if (!interface_)
        return;

    disconnect(interface_, SIGNAL(MediaPlayerKeyPressed(QString,QString)),
               this, SLOT(GnomeMediaKeyPressed(QString,QString)));

    interface_->call("ReleaseMediaPlayerKeys", Constants::NAME);
#endif
}

void GnomeGlobalShortcutBackend::GnomeMediaKeyPressed(const QString&, const QString& key) {
    if (key == "Play")     manager_->shortcuts()["play_pause"].action->trigger();
    if (key == "Stop")     manager_->shortcuts()["stop"].action->trigger();
    if (key == "Next")     manager_->shortcuts()["next_track"].action->trigger();
    if (key == "Previous") manager_->shortcuts()["prev_track"].action->trigger();
}
