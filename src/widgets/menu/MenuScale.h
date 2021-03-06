/****************************************************************************
* Tano - An Open IP TV Player
* Copyright (C) 2012 Tadej Novak <tadej@tano.si>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************/

#ifndef TANO_MENUSCALE_H_
#define TANO_MENUSCALE_H_

#include <VLCQtWidgets/WidgetVideo.h>

#include "menu/MenuCore.h"

class MenuScale : public MenuCore
{
Q_OBJECT
public:
    MenuScale(VlcWidgetVideo *videoWidget,
              QWidget *parent = 0);
    ~MenuScale();

    void setDefault(const Vlc::Scale &scale);

protected:
    void changeEvent(QEvent *e);

private slots:
    void apply();

private:
    VlcWidgetVideo *_videoWidget;

    QMap<QAction *, Vlc::Scale> _map1;
    QMap<Vlc::Scale, QAction *> _map2;
};

#endif // TANO_MENUSCALE_H_
