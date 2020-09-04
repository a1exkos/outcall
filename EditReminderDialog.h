#ifndef EDITREMINDERDIALOG_H
#define EDITREMINDERDIALOG_H

#include "AsteriskManager.h"
#include "Global.h"
#include "ChooseEmployee.h"

#include <QDialog>
#include <QDateTime>
#include <QPointer>

namespace Ui {
class EditReminderDialog;
}

class EditReminderDialog : public QDialog
{
    Q_OBJECT

signals:
    void sendData(bool);

public slots:
    void receiveEmployee(QStringList);

public:
    explicit EditReminderDialog(QWidget *parent = 0);
    ~EditReminderDialog();

    void setValuesReminders(QString, QString, QDateTime, QString);

private slots:
    void onChooseEmployee();
    void onSave();
    void onTextChanged();

    void on_add5MinButton_clicked();
    void on_add10MinButton_clicked();
    void on_add30MinButton_clicked();
    void on_add60MinButton_clicked();

    void keyPressEvent(QKeyEvent*);
    void closeEvent(QCloseEvent*);

private:
    Ui::EditReminderDialog *ui;

    QPointer<ChooseEmployee> chooseEmployee;

    QStringList employeeInitial;
    QStringList employee;

    QString my_number;
    QString callId;
    QString id;
    QString group_id;
    QDateTime oldDateTime;
    QString oldNote;
};

#endif // EDITREMINDERDIALOG_H
