//Marcus Tedesco and Amre Kebaish
//HW7 Group Project
//ECE 3574
//Due: Dec. 9, 2012

#ifndef CLIENTWID3_H
#define CLIENTWID3_H

#include <QWidget>

namespace Ui {
class clientWid3;
}

class clientWid3 : public QWidget
{
    Q_OBJECT
    
public:
    explicit clientWid3(QWidget *parent = 0);
    ~clientWid3();

    void setName(QString friendName);
    
private:
    Ui::clientWid3 *ui;
    QString toName;

private slots:
    void sendMessage();

signals:
    void send(QString,QString);
};

#endif // CLIENTWID3_H
