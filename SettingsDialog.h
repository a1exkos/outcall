#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include "AsteriskManager.h"

#include <QDialog>
#include <QFile>
#include <QLineEdit>
#include <QList>

class QTcpSocket;
class AddExtensionDialog;
class QTreeWidgetItem;

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT

signals:
    void restart(bool);

public slots:
    void checkExten();
    void checkGroupExten();

public:
    explicit SettingsDialog(QWidget *parent = 0);
    ~SettingsDialog();

    void saveSettings();
    void loadSettings();
    void show();
    QString getExtension();
    QString getGroupExtension();

private slots:
    void checkAsteriskState(AsteriskManager::AsteriskState state);
    void onAddButtonClicked();
    void onRemoveButtonClicked();
    void onEditButtonClicked();
    void onAddGroupButtonClicked();
    void onRemoveGroupButtonClicked();
    void onEditGroupButtonClicked();
    void applySettings();
    void loadLanguages();

    void on_applyButton_clicked();
    void on_cancelButton_clicked();

    void closeEvent(QCloseEvent* event);
    void keyPressEvent(QKeyEvent* event);

private:
    Ui::SettingsDialog *ui;

    QTcpSocket* m_tcpSocket;

    AddExtensionDialog* m_addExtensionDialog;

    QFile f;
    QString userName;
    QString path;
    QString exten;
    QString group_exten;
    QStringList m_countries;

    QList<QWidget*> widgetsList;
};

#endif // SETTINGSDIALOG_H
