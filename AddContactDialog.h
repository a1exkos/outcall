#ifndef ADDCONTACTDIALOG_H
#define ADDCONTACTDIALOG_H

#include <QDialog>
#include <QSqlQueryModel>
#include <QValidator>

namespace Ui {
class AddContactDialog;
}

class AddContactDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddContactDialog(QWidget *parent = 0);
    void setValuesContacts(int &);
    void setValuesCallHistory(QString &);
    ~AddContactDialog();

protected:
    void onSave();
    void addContact();
    void updateContact();

private:
    Ui::AddContactDialog *ui;
    QValidator *validator;
    QSqlQueryModel *query1;
    QString updateID;
    QString firstNumber;
    QString secondNumber;
    QString thirdNumber;
    QString fourthNumber;
    QString fifthNumber;
};

#endif // ADDCONTACTDIALOG_H
