#-------------------------------------------------
#
# Project created by QtCreator 2019-07-03T16:55:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PFC
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    mypushbutton.cpp \
    chooselevel.cpp \
    level1.cpp \
    level2.cpp \
    level3.cpp \
    level4.cpp \
    level5.cpp \
    fries_change.cpp \
    ham_change.cpp \
    hot_change.cpp \
    san_change.cpp \
    cola_change.cpp \
    cake1_change.cpp \
    cake2_change.cpp \
    cake3_change.cpp \
    cake4_change.cpp \
    cake5_change.cpp \
    cake6_change.cpp \
    sushi1_change.cpp \
    sushi2_change.cpp \
    sushi3_change.cpp \
    sushi4_change.cpp \
    sushi5_change.cpp \
    ice1_change.cpp \
    ice2_change.cpp \
    ice3_change.cpp \
    ice4_change.cpp \
    ice5_change.cpp \
    tang1_change.cpp \
    tang2_change.cpp \
    tang3_change.cpp \
    tang5_change.cpp \
    tang6_change.cpp \
    tang4_change.cpp \
    sushi6_change.cpp \
    ice6_change.cpp

HEADERS += \
        mainwindow.h \
    mypushbutton.h \
    chooselevel.h \
    level1.h \
    level2.h \
    level3.h \
    level4.h \
    level5.h \
    fries_change.h \
    ham_change.h \
    hot_change.h \
    san_change.h \
    cola_change.h \
    cake1_change.h \
    cake2_change.h \
    cake3_change.h \
    cake4_change.h \
    cake5_change.h \
    cake6_change.h \
    sushi1_change.h \
    sushi2_change.h \
    sushi3_change.h \
    sushi4_change.h \
    sushi5_change.h \
    ice1_change.h \
    ice2_change.h \
    ice3_change.h \
    ice4_change.h \
    ice5_change.h \
    tang1_change.h \
    tang2_change.h \
    tang3_change.h \
    tang5_change.h \
    tang6_change.h \
    tang4_change.h \
    sushi6_change.h \
    ice6_change.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pic.qrc
