# -------------------------------------------------
# Project created by QtCreator 2009-05-08T09:11:12
# -------------------------------------------------
QT += svg
TARGET = criquedespirates
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    mainpiratemap.cpp \
    cartetresor.cpp \
    piratemapbackground.cpp \
    piratemapisland.cpp \
    piratemapboat.cpp \
    piratemapcartetresor.cpp \
    bateau.cpp \
    partie.cpp \
    ile.cpp \
    des.cpp \
    factory.cpp \
    bateaupj.cpp \
    bateaupnj.cpp \
    bateaupl.cpp \
    qcomboboxdestination.cpp \
    bateaupnj2.cpp \
    combats.cpp \
    sortbateaubyvoile.cpp
HEADERS += mainwindow.h \
    mainpiratemap.h \
    cartetresor.h \
    piratemapbackground.h \
    piratemapisland.h \
    piratemapboat.h \
    piratemapcartetresor.h \
    bateau.h \
    partie.h \
    ile.h \
    des.h \
    factory.h \
    bateaupj.h \
    bateaupnj.h \
    bateaupl.h \
    qcomboboxdestination.h \
    bateaupnj2.h \
    combats.h \
    sortbateaubyvoile.h
FORMS += mainwindow.ui
RESOURCES += pirateMapElements.qrc

# Input
# SOURCES += main.cpp
# install
# target.path = $$[QT_INSTALL_EXAMPLES]/animation/moveblocks
# sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS states.pro
# sources.path = $$[QT_INSTALL_EXAMPLES]/animation/moveblocks
# INSTALLS += target sources
include(include/qtanimationframework-2.3-opensource/src/qtanimationframework.pri)
