#ifndef CALLHISTORYDIALOG_H
#define CALLHISTORYDIALOG_H

#include "AsteriskManager.h"
#include "AddContactDialog.h"
#include "AddOrgContactDialog.h"
#include "EditContactDialog.h"
#include "EditOrgContactDialog.h"
#include "SettingsDialog.h"
#include "AddNoteDialog.h"
#include "OutCALL.h"

#include <QDialog>
#include <QMap>
#include <QSqlQueryModel>
#include <QTreeWidget>

namespace Ui {
class CallHistoryDialog;
}

class CallHistoryDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CallHistoryDialog(QWidget *parent = 0);

    ~CallHistoryDialog();

    enum Calls
    {
        MISSED = 0,
        RECIEVED = 1,
        PLACED = 2
    };

    void addCall(const QMap<QString, QVariant> &call, Calls calls, QString stateDB);

protected slots:

    void onAddContact();
    void onAddOrgContact();
    void onRemoveButton();
    void onCallClicked();
    bool checkNumber(QString &);
    void onAddNotes();
    void editContact(QString &);
    void loadCalls();
    QString getUpdateId(QString &);

private:
    Ui::CallHistoryDialog *ui;
    QSqlQuery *query;
    AddContactDialog *addContactDialog;
    AddOrgContactDialog *addOrgContactDialog;
    EditContactDialog *editContactDialog;
    EditOrgContactDialog *editOrgContactDialog;
    SettingsDialog *settingsDialog;
    AddNoteDialog *addNoteDialog;
    QString number;
};

#endif // CALLHISTORYDIALOG_H
