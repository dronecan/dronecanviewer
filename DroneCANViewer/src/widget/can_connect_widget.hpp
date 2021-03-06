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

#ifndef CAN_CONNECT_WIDGET_HPP
#define CAN_CONNECT_WIDGET_HPP

#include "ui_can_connect.h"

#include <qdialog.h>

class CANConnectDialog : public QDialog
{
    Q_OBJECT

public:
    CANConnectDialog(QString pluginName, QWidget *parent = nullptr);

    QString getDriverName(void);
    QString getDeviceName(void);

public slots:
    void refreshDrivers();
    void updateConnectButton();

    void driverSelected(int idx);

protected:
    Ui::CanConnectForm ui;

    QStringList devices;
};


#endif // CAN_CONNECT_WIDGET_HPP
