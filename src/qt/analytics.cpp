#include "ui_analytics.h"
#include "guiutil.h"
#include "bitcoingui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Analytics::Analytics(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analytics),
    model(0)
{
    ui->setupUi(this);
}
    void Analytics::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Analytics::~Analytics()
{
    delete ui;
}


void Analytics::on_Refresh_clicked()
{
    ui->webView->reload();
}

void Analytics::on_Home_clicked()
{
    ui->webView->load(QUrl("http://statmine.online"));
}