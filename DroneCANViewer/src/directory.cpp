/**

Copyright (c) 2020 DroneCAN

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

**/

#include <qdir.h>

#include "directory.hpp"


namespace DroneCAN::Directory {


/**
 * @brief escapePath - Replace different separators with local separator
 * @param path
 * @return
 */
QString escapePath(QString path)
{
    path = path.replace("/", QDir::separator());
    path = path.replace("\\", QDir::separator());

    return path;
}


/**
 * @brief localPath - Path local to the user where settings files, logs, etc are stored
 * @return
 */
QString localPath()
{
    QString path = QDir::homePath() + QDir::separator() + QString("dronecan") + QDir::separator();

    return escapePath(path);
}


QString workspaceDirectory()
{
    return localPath() + "workspace" + QDir::separator();
}


QString defaultWorkspaceFile()
{
    return workspaceDirectory() + "default.wsf";
}


QString globalSettingsFile()
{
    return localPath() + "dronecan.ini";
}


QString logDirectory()
{
    return localPath() + "log" + QDir::separator();
}

}
