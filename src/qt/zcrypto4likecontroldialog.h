// Copyright (c) 2017 The PIVX developers
// Copyright (c) 2017-2018 The Crypto4Like developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZCRYPTO4LIKECONTROLDIALOG_H
#define ZCRYPTO4LIKECONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "primitives/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZCrypto4LikeControlDialog;
}

class ZCrypto4LikeControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZCrypto4LikeControlDialog(QWidget *parent);
    ~ZCrypto4LikeControlDialog();

    void setModel(WalletModel* model);

    static std::list<std::string> listSelectedMints;
    static std::list<CZerocoinMint> listMints;
    static std::vector<CZerocoinMint> GetSelectedMints();

private:
    Ui::ZCrypto4LikeControlDialog *ui;
    WalletModel* model;
    PrivacyDialog* privacyDialog;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZCRYPTO4LIKECONTROLDIALOG_H
