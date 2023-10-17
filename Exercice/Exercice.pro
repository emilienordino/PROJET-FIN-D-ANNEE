#-------------------------------------------------
#
# Project created by QtCreator 2023-09-18T21:08:25
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Exercice
TEMPLATE = app
ICON = "C:/Users/FANOMEZANTSOA Ordino/Pictures/cart_17822.ico"


SOURCES += main.cpp\
    fournisseur.cpp \
    marchandise.cpp \
    entrepot.cpp \
    livrer.cpp \
    stocker.cpp \
    modifier_fournisseur.cpp \
    modifier_marchand.cpp \
    modifier_entrepot.cpp \
    modifier_livrer.cpp \
    modifier_stocker.cpp \
    principale.cpp \
    interface_de_connexion.cpp

HEADERS  += \
    fournisseur.h \
    connexion_mysql.h \
    marchandise.h \
    entrepot.h \
    livrer.h \
    stocker.h \
    modifier_fournisseur.h \
    modifier_marchand.h \
    modifier_entrepot.h \
    modifier_livrer.h \
    modifier_stocker.h \
    principale.h \
    interface_de_connexion.h

FORMS    += \
    fournisseur.ui \
    marchandise.ui \
    entrepot.ui \
    livrer.ui \
    stocker.ui \
    modifier_fournisseur.ui \
    modifier_marchand.ui \
    modifier_entrepot.ui \
    modifier_livrer.ui \
    modifier_stocker.ui \
    principale.ui \
    interface_de_connexion.ui

RESOURCES +=

//RC_ICONS = myappico.ico

//RC_ICONS = cart_17822.ico
