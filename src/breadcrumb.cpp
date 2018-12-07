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

#include "breadcrumb.h"
#include "iconutils.h"

Breadcrumb::Breadcrumb(QWidget *parent) : QToolBar(parent) {
    backAction = new QAction(IconUtils::icon("go-previous"), tr("&Back"), this);
    QKeySequence keySequence(Qt::ALT + Qt::Key_Left);
    backAction->setShortcut(keySequence);
    backAction->setStatusTip(tr("Go back") + " (" + keySequence.toString(QKeySequence::NativeText) +
                             ")");
    connect(backAction, SIGNAL(triggered()), SIGNAL(goneBack()));
    addAction(backAction);

    setIconSize(QSize(16, 16));
}

void Breadcrumb::addItem(const QString &title) {
    QAction *action = addAction(title);
    action->setEnabled(false);

    /*
    // all actions enabled but the last one
    foreach (QAction *a, actions())
        a->setEnabled(a != action);
        */
}

void Breadcrumb::goBack() {
    if (actions().size() > 1) {
        QAction *action = actions().last();
        if (action) {
            removeAction(action);
            delete action;
        }
    }

    /*
    // all actions enabled but the last one
    QAction *lastAction = actions().last();
    foreach (QAction *a, actions())
        a->setEnabled(a != lastAction);
        */
}

void Breadcrumb::clear() {
    // remove all but the backAction
    for (QAction *action : actions()) {
        if (action != backAction) {
            removeAction(action);
            delete action;
        }
    }
}
