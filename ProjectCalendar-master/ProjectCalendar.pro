#-------------------------------------------------
#
# Project created by QtCreator 2015-05-04T15:01:07
#
#-------------------------------------------------

QT       += core gui xml
QT += xml


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjectCalendar
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tache.cpp \
    programmationmanager.cpp \
    projet.cpp \
    projetmanager.cpp \
    addtachewindow.cpp \
    newprojectwindow.cpp \
    projectwindow.cpp \
    tacheunitairepreemptive.cpp \
    tacheunitaire.cpp \
    tachecomposite.cpp \
    loadprojectwindow.cpp \
    calendarwindow.cpp \
    tachefactory.cpp \
    addpreemptivewindow.cpp \
    programmertachewindow.cpp \
    addcompositewindow.cpp \
    addsouspreemptivewindow.cpp \
    addsoustachewindow.cpp \
    addsouscompositewindow.cpp \
    ajouterprogpreemptivewindow.cpp
    addpreemtivewindow.cpp

HEADERS  += mainwindow.h \
    tache.h \
    programmation.h \
    calendarexception.h \
    programmationmanager.h \
    evenement.h \
    projet.h \
    projetmanager.h \
    addtachewindow.h \
    newprojectwindow.h \
    projectwindow.h \
    global.h \
    tacheunitairepreemptive.h \
    tacheunitaire.h \
    tachecomposite.h \
    loadprojectwindow.h \
    calendarwindow.h \
    tachefactory.h \
    addpreemptivewindow.h \
    programmertachewindow.h \
    addcompositewindow.h \
    addsouspreemptivewindow.h \
    addsoustachewindow.h \
    addsouscompositewindow.h \
    ajouterprogpreemptivewindow.h
    addpreemtivewindow.h

FORMS    += mainwindow.ui \
    loadprojectwindow.ui \
    calendarwindow.ui \
    programmertache.ui \
    ajouterprogpreemptivewindow.ui
