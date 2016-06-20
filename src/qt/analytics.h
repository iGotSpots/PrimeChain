#ifndef ANALYTICS_H
#define ANALYTICS_H

#include <QWidget>

namespace Ui {
	class Analytics;
}
class WalletModel;

class Analytics : public QWidget
{
    Q_OBJECT

public:
    explicit Analytics(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Analytics();    

private slots:
    void on_Refresh_clicked();

    void on_Home_clicked();


private:
	Ui::Analytics *ui;
    WalletModel *model;
};

#endif // ANALYTICS_H