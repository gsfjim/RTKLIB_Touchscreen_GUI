/****************************************************************************
** Meta object code from reading C++ file 'affichestr2str.h'
**
** Created: Thu May 26 23:35:34 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "affichestr2str.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'affichestr2str.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AfficheStr2str[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x0a,
      66,   32,   32,   32, 0x0a,
      81,   32,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AfficheStr2str[] = {
    "AfficheStr2str\0closeSignal(int)\0\0"
    "recupdonneesStr2str(QStringList)\0"
    "FermeStr2str()\0finThread(bool)\0"
};

void AfficheStr2str::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AfficheStr2str *_t = static_cast<AfficheStr2str *>(_o);
        switch (_id) {
        case 0: _t->closeSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->recupdonneesStr2str((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->FermeStr2str(); break;
        case 3: _t->finThread((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AfficheStr2str::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AfficheStr2str::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AfficheStr2str,
      qt_meta_data_AfficheStr2str, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AfficheStr2str::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AfficheStr2str::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AfficheStr2str::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AfficheStr2str))
        return static_cast<void*>(const_cast< AfficheStr2str*>(this));
    return QDialog::qt_metacast(_clname);
}

int AfficheStr2str::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AfficheStr2str::closeSignal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
