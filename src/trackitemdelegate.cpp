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

#include "trackitemdelegate.h"
#include "finderwidget.h"
#include "model/track.h"

namespace {
const int padding = 10;
}

TrackItemDelegate::TrackItemDelegate(QObject *parent) : QStyledItemDelegate(parent) {}

QSize TrackItemDelegate::sizeHint(const QStyleOptionViewItem &option,
                                  const QModelIndex & /*index*/) const {
    // determine item height based on font metrics
    int itemHeight = option.fontMetrics.height() * 1.8;
    return QSize(itemHeight, itemHeight);
}

void TrackItemDelegate::paint(QPainter *painter,
                              const QStyleOptionViewItem &option,
                              const QModelIndex &index) const {
    QApplication::style()->drawPrimitive(QStyle::PE_PanelItemViewItem, &option, painter);
    paintTrack(painter, option, index);
}

void TrackItemDelegate::paintTrack(QPainter *painter,
                                   const QStyleOptionViewItem &option,
                                   const QModelIndex &index) const {
    // get the data object
    const TrackPointer trackPointer = index.data(Finder::DataObjectRole).value<TrackPointer>();
    Track *track = trackPointer.data();
    if (!track) return;

    const bool isSelected = option.state & QStyle::State_Selected;

    painter->save();

    // text color
    if (isSelected)
        painter->setPen(QPen(option.palette.brush(QPalette::HighlightedText), 0));
    else
        painter->setPen(QPen(option.palette.brush(QPalette::Text), 0));

    painter->translate(option.rect.topLeft());
    const QRect line(0, 0, option.rect.width(), option.rect.height());

    QPointF textLoc(padding * 2, 0);

    // track number
    if (track->getNumber() > 0) {
        painter->save();

        QFont font = painter->font();
        font.setPointSize(font.pointSize() - 1);
        painter->setFont(font);

        QString trackString = QString("%1").arg(track->getNumber(), 2, 10, QChar('0'));
        QSize trackStringSize(QFontMetrics(painter->font()).size(Qt::TextSingleLine, trackString));
        QRect trackTextBox(textLoc.x(), textLoc.y(), trackStringSize.width(), line.height());

        painter->setOpacity(.75);
        painter->setPen(Qt::white);
        painter->drawText(trackTextBox, Qt::AlignCenter, trackString);
        painter->restore();
    }

    // title
    const QString &titleString = track->getTitle();
    QSize titleStringSize(QFontMetrics(painter->font()).size(Qt::TextSingleLine, titleString));
    QSize trackStringSize(
            QFontMetrics(painter->font()).size(Qt::TextSingleLine, QStringLiteral("00")));
    textLoc.setX(textLoc.x() + trackStringSize.width() + padding * 2);
    QRect titleTextBox(textLoc.x(), textLoc.y(), titleStringSize.width(), line.height());
    painter->drawText(titleTextBox, Qt::AlignVCenter | Qt::AlignLeft, track->getTitle());

    painter->restore();
}
