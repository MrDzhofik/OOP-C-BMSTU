QT       += core gui
QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add.cpp \
    benefit.cpp \
    delete.cpp \
    histogramm.cpp \
    main.cpp \
    mainwindow.cpp \
    max.cpp \
    other.cpp \
    print.cpp \
    sum.cpp

HEADERS += \
    Structure.h \
    add.h \
    benefit.h \
    delete.h \
    histogramm.h \
    mainwindow.h \
    max.h \
    other.h \
    print.h \
    sum.h

FORMS += \
    add.ui \
    benefit.ui \
    delete.ui \
    histogramm.ui \
    mainwindow.ui \
    max.ui \
    other.ui \
    print.ui \
    sum.ui

TRANSLATIONS += \
    Practic_3_ab_GE.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
