QT += webenginewidgets

SOURCES += main.cpp \
    optionsdialog.cpp \
    passworddialog.cpp \
    pwddialog.cpp \
    webenginepage.cpp

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp

HEADERS += \
    optionsdialog.h \
    passworddialog.h \
    pwddialog.h \
    ui_optionsdialog.h \
    ui_passworddialog.h \
    webenginepage.h

FORMS += \
    optionsdialog.ui \
    passworddialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    minimal.qrc

DISTFILES += \
    gear.png
