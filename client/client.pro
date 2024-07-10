QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    channels.cpp \
    intanswer.cpp \
    main.cpp \
    dooz.cpp \
    optionsanswer.cpp \
    question.cpp \
    stringanswer.cpp

HEADERS += \
    channels.h \
    dooz.h \
    intanswer.h \
    optionsanswer.h \
    question.h \
    stringanswer.h



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
