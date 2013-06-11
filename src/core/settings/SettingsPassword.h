/****************************************************************************
* Tano - An Open IP TV Player
* Copyright (C) 2013 Tadej Novak <tadej@tano.si>
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

#ifndef TANO_SETTINGSPASSWORD_H_
#define TANO_SETTINGSPASSWORD_H_

#include <QtCore/QSettings>

#include "CoreSharedExport.h"

class SimpleCrypt;

class TANO_CORE_EXPORT SettingsPassword : public QSettings
{
public:
    SettingsPassword(QObject *parent = 0);
    ~SettingsPassword();

    void readSettings();
    void writeSettings();

    inline QString username() const { return _username; }
    inline void setUsername(const QString &s) { _username = s; }

    inline QString password() const { return _password; }
    inline void setPassword(const QString &s) { _password = s; }

    inline QString uid() const { return _uid; }
    inline void setUid(const QString &s) { _uid = s; }

private:
    QString _username;
    QString _password;
    QString _uid;

    SimpleCrypt *_crypt;
};

#endif // TANO_SETTINGS_H_
