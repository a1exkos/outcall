#-------------------------------------------------
#
# Project created by QtCreator 2015-03-16T10:53:56
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OutCALL
TEMPLATE = app


LIBS +=	Shell32.lib \
        Advapi32.lib \

TRANSLATIONS = translations/outcall_pt-br.ts \


SOURCES += main.cpp\
    DebugInfoDialog.cpp \
    AddExtensionDialog.cpp \
    AsteriskManager.cpp \
    CallHistoryDialog.cpp \
    Global.cpp \
    OutCALL.cpp \
    PlaceCallDialog.cpp \
    SettingsDialog.cpp \
    PopupWindow.cpp \
    Notifier.cpp \
    ContactsDialog.cpp \
    AddContactDialog.cpp \
    PopupHelloWindow.cpp \
    AddOrgContactDialog.cpp \
    ViewContactDialog.cpp \
    ViewOrgContactDialog.cpp \
    EditContactDialog.cpp \
    EditOrgContactDialog.cpp \
    AddNoteDialog.cpp \
    ChooseNumber.cpp

HEADERS  += \
    DebugInfoDialog.h \
    AsteriskManager.h \
    CallHistoryDialog.h \
    Global.h \
    OutCALL.h \
    PlaceCallDialog.h \
    AddExtensionDialog.h \
    SettingsDialog.h \
    PopupWindow.h \
    Notifier.h \
    ContactsDialog.h \
    AddContactDialog.h \
    PopupHelloWindow.h \
    AddOrgContactDialog.h \
    ViewContactDialog.h \
    ViewOrgContactDialog.h \
    EditContactDialog.h \
    EditOrgContactDialog.h \
    AddNoteDialog.h \
    ChooseNumber.h

FORMS    += \
    AddExtensionDialog.ui \
    CallHistoryDialog.ui \
    DebugInfoDialog.ui \
    PlaceCallDialog.ui \
    SettingsDialog.ui \
    PopupWindow.ui \
    ContactsDialog.ui \
    AddContactDialog.ui \
    PopupHelloWindow.ui \
    AddOrgContactDialog.ui \
    ViewContactDialog.ui \
    ViewOrgContactDialog.ui \
    EditContactDialog.ui \
    EditOrgContactDialog.ui \
    AddNoteDialog.ui \
    ChooseNumber.ui

RC_FILE = file.rc

RESOURCES += \
    images.qrc
