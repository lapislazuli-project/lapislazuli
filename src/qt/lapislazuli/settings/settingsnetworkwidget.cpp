// Copyright (c) 2019 The Lapislazuli developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "qt/lapislazuli/settings/settingsnetworkwidget.h"
#include "qt/lapislazuli/settings/forms/ui_settingsnetworkwidget.h"
#include "optionsmodel.h"
#include "qt/lapislazuli/qtutils.h"

SettingsNetworkWidget::SettingsNetworkWidget(LapislazuliGUI* _window, QWidget *parent) :
    PWidget(_window, parent),
    ui(new Ui::SettingsNetworkWidget)
{
    ui->setupUi(this);

    this->setStyleSheet(parent->styleSheet());

    // Containers
    ui->left->setProperty("cssClass", "container");
    ui->left->setContentsMargins(10,10,10,10);

    // Buttons
    ui->pushButtonSave->setText(tr("SAVE"));
    ui->pushButtonReset->setText(tr("Reset to default"));
    setCssBtnPrimary(ui->pushButtonSave);
    setCssBtnSecondary(ui->pushButtonReset);

    connect(ui->pushButtonSave, SIGNAL(clicked()), parent, SLOT(onSaveOptionsClicked()));
}

void SettingsNetworkWidget::setMapper(QDataWidgetMapper *mapper){
}

SettingsNetworkWidget::~SettingsNetworkWidget()
{
    delete ui;
}
