// Copyright (c) 2019 The Lapislazuli developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SETTINGSDISPLAYOPTIONSWIDGET_H
#define SETTINGSDISPLAYOPTIONSWIDGET_H

#include <QWidget>
#include <QDataWidgetMapper>
#include "qt/lapislazuli/pwidget.h"

namespace Ui {
class SettingsDisplayOptionsWidget;
}

class SettingsDisplayOptionsWidget : public PWidget
{
    Q_OBJECT

public:
    explicit SettingsDisplayOptionsWidget(LapislazuliGUI* _window = nullptr, QWidget *parent = nullptr);
    ~SettingsDisplayOptionsWidget();

    void setMapper(QDataWidgetMapper *mapper);
    void initLanguages();
    void loadClientModel() override;

public slots:
    void onResetClicked();

private:
    Ui::SettingsDisplayOptionsWidget *ui;
};

#endif // SETTINGSDISPLAYOPTIONSWIDGET_H
