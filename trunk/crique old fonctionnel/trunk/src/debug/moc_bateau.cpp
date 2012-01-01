/****************************************************************************
** Meta object code from reading C++ file 'bateau.h'
**
** Created: Sun 1. Jan 20:26:22 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bateau.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bateau.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Bateau[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      29,    7,    7,    7, 0x05,
      53,    7,    7,    7, 0x05,
      74,    7,    7,    7, 0x05,
      95,    7,    7,    7, 0x05,
     119,    7,    7,    7, 0x05,
     142,    7,    7,    7, 0x05,
     166,    7,    7,    7, 0x05,
     186,    7,    7,    7, 0x05,
     206,    7,    7,    7, 0x05,
     226,    7,    7,    7, 0x05,
     249,    7,    7,    7, 0x05,
     269,    7,    7,    7, 0x05,
     286,    7,    7,    7, 0x05,
     303,    7,    7,    7, 0x05,
     323,    7,    7,    7, 0x05,
     340,    7,    7,    7, 0x05,
     360,    7,    7,    7, 0x05,
     379,    7,    7,    7, 0x05,
     406,    7,    7,    7, 0x05,
     431,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     462,  459,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Bateau[] = {
    "Bateau\0\0changementVoile(int)\0"
    "changementEquipage(int)\0changementCanon(int)\0"
    "changementCoque(int)\0changementDoublons(int)\0"
    "changementTresors(int)\0changementRenommee(int)\0"
    "positionCoque(bool)\0positionVoile(bool)\0"
    "positionCanon(bool)\0positionEquipage(bool)\0"
    "positionBateau(int)\0valeurCoque(int)\0"
    "valeurCanon(int)\0valeurEquipage(int)\0"
    "valeurVoile(int)\0combattre(Combats*)\0"
    "valeurNom(QString)\0disableSlidersBateau(bool)\0"
    "ameliorationImpossible()\0"
    "signalPartieLogger(QString)\0,,\0"
    "slotCombattreBateauPJ(int,int,Combats*)\0"
};

const QMetaObject Bateau::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Bateau,
      qt_meta_data_Bateau, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Bateau::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Bateau::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Bateau::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Bateau))
        return static_cast<void*>(const_cast< Bateau*>(this));
    return QObject::qt_metacast(_clname);
}

int Bateau::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changementVoile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: changementEquipage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: changementCanon((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: changementCoque((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: changementDoublons((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: changementTresors((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: changementRenommee((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: positionCoque((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: positionVoile((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: positionCanon((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: positionEquipage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: positionBateau((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: valeurCoque((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: valeurCanon((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: valeurEquipage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: valeurVoile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: combattre((*reinterpret_cast< Combats*(*)>(_a[1]))); break;
        case 17: valeurNom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: disableSlidersBateau((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: ameliorationImpossible(); break;
        case 20: signalPartieLogger((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: slotCombattreBateauPJ((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Combats*(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void Bateau::changementVoile(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Bateau::changementEquipage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Bateau::changementCanon(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Bateau::changementCoque(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Bateau::changementDoublons(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Bateau::changementTresors(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Bateau::changementRenommee(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Bateau::positionCoque(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Bateau::positionVoile(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Bateau::positionCanon(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Bateau::positionEquipage(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Bateau::positionBateau(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Bateau::valeurCoque(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Bateau::valeurCanon(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Bateau::valeurEquipage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Bateau::valeurVoile(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Bateau::combattre(Combats * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Bateau::valeurNom(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Bateau::disableSlidersBateau(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Bateau::ameliorationImpossible()
{
    QMetaObject::activate(this, &staticMetaObject, 19, 0);
}

// SIGNAL 20
void Bateau::signalPartieLogger(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_END_MOC_NAMESPACE
