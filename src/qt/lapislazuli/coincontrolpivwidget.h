// Copyright (c) 2019 The Lapislazuli developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLLiLLiWIDGET_H
#define COINCONTROLLiLLiWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlPivWidget;
}

class CoinControlPivWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlPivWidget(QWidget *parent = nullptr);
    ~CoinControlPivWidget();

private:
    Ui::CoinControlPivWidget *ui;
};

#endif // COINCONTROLLiLLiWIDGET_H
