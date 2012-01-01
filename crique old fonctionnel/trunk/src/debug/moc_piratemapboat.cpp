/****************************************************************************
** Meta object code from reading C++ file 'piratemapboat.h'
**
** Created: Sun 1. Jan 20:26:17 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../piratemapboat.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'piratemapboat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PirateMapBoat[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   15,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PirateMapBoat[] = {
    "PirateMapBoat\0\0,\0goToPosition(int,QPoint)\0"
};

const QMetaObject PirateMapBoat::staticMetaObject = {
    { &QGraphicsSvgItem::staticMetaObject, qt_meta_stringdata_PirateMapBoat,
      qt_meta_data_PirateMapBoat, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PirateMapBoat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PirateMapBoat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PirateMapBoat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PirateMapBoat))
        return static_cast<void*>(const_cast< PirateMapBoat*>(this));
    return QGraphicsSvgItem::qt_metacast(_clname);
}

int PirateMapBoat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsSvgItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: goToPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
