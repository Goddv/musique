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

#ifndef ABOUTVIEW_H
#define ABOUTVIEW_H

#include "constants.h"
#include "view.h"
#include <QtWidgets>

class AboutView : public View {
    Q_OBJECT

public:
    AboutView(QWidget *parent);
    void appear();
    QHash<QString, QVariant> metadata() {
        QHash<QString, QVariant> metadata;
        metadata.insert("title", tr("About"));
        metadata.insert("description",
                        tr("What you always wanted to know about %1 and never dared to ask")
                                .arg(Constants::NAME));
        return metadata;
    }

protected:
    void paintEvent(QPaintEvent *);
};
#endif
