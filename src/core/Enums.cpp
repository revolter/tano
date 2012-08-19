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

#include <QtCore/QObject>

#include "Enums.h"

QStringList Tano::channelTypes()
{
    QStringList list;
    list << QObject::tr("SD")
         << QObject::tr("HD")
         << QObject::tr("Radio");

    return list;
}

QStringList Tano::timerStates()
{
    QStringList list;
    list << QObject::tr("Enabled")
         << QObject::tr("Disabled")
         << QObject::tr("Recording")
         << QObject::tr("Finished")
         << QObject::tr("Expired");

    return list;
}

QStringList Tano::timerTypes()
{
    QStringList list;
    list << QObject::tr("Once")
         << QObject::tr("Daily")
         << QObject::tr("Weekly")
         << QObject::tr("Weekdays")
         << QObject::tr("Instant");

    return list;
}

QStringList Tano::timerTypesLong()
{
    QStringList list;
    list << QObject::tr("repeats only once")
         << QObject::tr("repeats daily")
         << QObject::tr("repeats weekly")
         << QObject::tr("repeats on weekdays")
         << QObject::tr("instant recording");

    return list;
}
