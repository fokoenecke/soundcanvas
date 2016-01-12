/****************************************************************************
** Meta object code from reading C++ file 'alsaport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../library/include/alsaport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alsaport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_drumstick__MidiPort_t {
    QByteArrayData data[12];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_drumstick__MidiPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_drumstick__MidiPort_t qt_meta_stringdata_drumstick__MidiPort = {
    {
QT_MOC_LITERAL(0, 0, 19), // "drumstick::MidiPort"
QT_MOC_LITERAL(1, 20, 10), // "subscribed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "MidiPort*"
QT_MOC_LITERAL(4, 42, 4), // "port"
QT_MOC_LITERAL(5, 47, 13), // "Subscription*"
QT_MOC_LITERAL(6, 61, 4), // "subs"
QT_MOC_LITERAL(7, 66, 17), // "midiClientChanged"
QT_MOC_LITERAL(8, 84, 11), // "MidiClient*"
QT_MOC_LITERAL(9, 96, 3), // "seq"
QT_MOC_LITERAL(10, 100, 8), // "attached"
QT_MOC_LITERAL(11, 109, 8) // "detached"

    },
    "drumstick::MidiPort\0subscribed\0\0"
    "MidiPort*\0port\0Subscription*\0subs\0"
    "midiClientChanged\0MidiClient*\0seq\0"
    "attached\0detached"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_drumstick__MidiPort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       7,    2,   39,    2, 0x06 /* Public */,
      10,    1,   44,    2, 0x06 /* Public */,
      11,    1,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 8,    4,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void drumstick::MidiPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MidiPort *_t = static_cast<MidiPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->subscribed((*reinterpret_cast< MidiPort*(*)>(_a[1])),(*reinterpret_cast< Subscription*(*)>(_a[2]))); break;
        case 1: _t->midiClientChanged((*reinterpret_cast< MidiPort*(*)>(_a[1])),(*reinterpret_cast< MidiClient*(*)>(_a[2]))); break;
        case 2: _t->attached((*reinterpret_cast< MidiPort*(*)>(_a[1]))); break;
        case 3: _t->detached((*reinterpret_cast< MidiPort*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MidiPort* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MidiPort* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MidiPort* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MidiPort* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MidiPort::*_t)(MidiPort * , Subscription * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MidiPort::subscribed)) {
                *result = 0;
            }
        }
        {
            typedef void (MidiPort::*_t)(MidiPort * , MidiClient * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MidiPort::midiClientChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (MidiPort::*_t)(MidiPort * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MidiPort::attached)) {
                *result = 2;
            }
        }
        {
            typedef void (MidiPort::*_t)(MidiPort * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MidiPort::detached)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject drumstick::MidiPort::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_drumstick__MidiPort.data,
      qt_meta_data_drumstick__MidiPort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *drumstick::MidiPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *drumstick::MidiPort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_drumstick__MidiPort.stringdata0))
        return static_cast<void*>(const_cast< MidiPort*>(this));
    return QObject::qt_metacast(_clname);
}

int drumstick::MidiPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void drumstick::MidiPort::subscribed(MidiPort * _t1, Subscription * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void drumstick::MidiPort::midiClientChanged(MidiPort * _t1, MidiClient * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void drumstick::MidiPort::attached(MidiPort * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void drumstick::MidiPort::detached(MidiPort * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
