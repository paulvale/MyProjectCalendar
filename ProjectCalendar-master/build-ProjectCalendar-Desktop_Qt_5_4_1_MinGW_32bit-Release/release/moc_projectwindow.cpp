/****************************************************************************
** Meta object code from reading C++ file 'projectwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projectwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProjectWindow_t {
    QByteArrayData data[14];
    char stringdata[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProjectWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProjectWindow_t qt_meta_stringdata_ProjectWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProjectWindow"
QT_MOC_LITERAL(1, 14, 13), // "nouveauProjet"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "chargerProjet"
QT_MOC_LITERAL(4, 43, 28), // "fenetreAjouterTacheComposite"
QT_MOC_LITERAL(5, 72, 27), // "fenetreAjouterTacheUnitaire"
QT_MOC_LITERAL(6, 100, 37), // "fenetreAjouterTacheUnitairePr..."
QT_MOC_LITERAL(7, 138, 13), // "modifierTache"
QT_MOC_LITERAL(8, 152, 12), // "fermerProjet"
QT_MOC_LITERAL(9, 165, 19), // "chargerDetailsTache"
QT_MOC_LITERAL(10, 185, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(11, 202, 4), // "item"
QT_MOC_LITERAL(12, 207, 6), // "column"
QT_MOC_LITERAL(13, 214, 15) // "programmerTache"

    },
    "ProjectWindow\0nouveauProjet\0\0chargerProjet\0"
    "fenetreAjouterTacheComposite\0"
    "fenetreAjouterTacheUnitaire\0"
    "fenetreAjouterTacheUnitairePreemptive\0"
    "modifierTache\0fermerProjet\0"
    "chargerDetailsTache\0QTreeWidgetItem*\0"
    "item\0column\0programmerTache"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProjectWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    2,   66,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   12,
    QMetaType::Void,

       0        // eod
};

void ProjectWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProjectWindow *_t = static_cast<ProjectWindow *>(_o);
        switch (_id) {
        case 0: _t->nouveauProjet(); break;
        case 1: _t->chargerProjet(); break;
        case 2: _t->fenetreAjouterTacheComposite(); break;
        case 3: _t->fenetreAjouterTacheUnitaire(); break;
        case 4: _t->fenetreAjouterTacheUnitairePreemptive(); break;
        case 5: _t->modifierTache(); break;
        case 6: _t->fermerProjet(); break;
        case 7: _t->chargerDetailsTache((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->programmerTache(); break;
        default: ;
        }
    }
}

const QMetaObject ProjectWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ProjectWindow.data,
      qt_meta_data_ProjectWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProjectWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectWindow.stringdata))
        return static_cast<void*>(const_cast< ProjectWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ProjectWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
