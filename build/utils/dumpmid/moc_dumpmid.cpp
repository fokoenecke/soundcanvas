/****************************************************************************
** Meta object code from reading C++ file 'dumpmid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../utils/dumpmid/dumpmid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dumpmid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDumpMIDI_t {
    QByteArrayData data[10];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDumpMIDI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDumpMIDI_t qt_meta_stringdata_QDumpMIDI = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QDumpMIDI"
QT_MOC_LITERAL(1, 10, 12), // "subscription"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "MidiPort*"
QT_MOC_LITERAL(4, 34, 4), // "port"
QT_MOC_LITERAL(5, 39, 13), // "Subscription*"
QT_MOC_LITERAL(6, 53, 4), // "subs"
QT_MOC_LITERAL(7, 58, 14), // "sequencerEvent"
QT_MOC_LITERAL(8, 73, 15), // "SequencerEvent*"
QT_MOC_LITERAL(9, 89, 2) // "ev"

    },
    "QDumpMIDI\0subscription\0\0MidiPort*\0"
    "port\0Subscription*\0subs\0sequencerEvent\0"
    "SequencerEvent*\0ev"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDumpMIDI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       7,    1,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void QDumpMIDI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDumpMIDI *_t = static_cast<QDumpMIDI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->subscription((*reinterpret_cast< MidiPort*(*)>(_a[1])),(*reinterpret_cast< Subscription*(*)>(_a[2]))); break;
        case 1: _t->sequencerEvent((*reinterpret_cast< SequencerEvent*(*)>(_a[1]))); break;
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
        }
    }
}

const QMetaObject QDumpMIDI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDumpMIDI.data,
      qt_meta_data_QDumpMIDI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDumpMIDI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDumpMIDI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDumpMIDI.stringdata0))
        return static_cast<void*>(const_cast< QDumpMIDI*>(this));
    return QObject::qt_metacast(_clname);
}

int QDumpMIDI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
