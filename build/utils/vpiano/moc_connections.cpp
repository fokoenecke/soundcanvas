/****************************************************************************
** Meta object code from reading C++ file 'connections.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../utils/vpiano/connections.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connections.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Connections_t {
    QByteArrayData data[12];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Connections_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Connections_t qt_meta_stringdata_Connections = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Connections"
QT_MOC_LITERAL(1, 12, 20), // "configureInputDriver"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "configureOutputDriver"
QT_MOC_LITERAL(4, 56, 15), // "clickedAdvanced"
QT_MOC_LITERAL(5, 72, 5), // "value"
QT_MOC_LITERAL(6, 78, 11), // "setMidiThru"
QT_MOC_LITERAL(7, 90, 13), // "refreshInputs"
QT_MOC_LITERAL(8, 104, 2), // "id"
QT_MOC_LITERAL(9, 107, 14), // "refreshOutputs"
QT_MOC_LITERAL(10, 122, 7), // "refresh"
QT_MOC_LITERAL(11, 130, 6) // "accept"

    },
    "Connections\0configureInputDriver\0\0"
    "configureOutputDriver\0clickedAdvanced\0"
    "value\0setMidiThru\0refreshInputs\0id\0"
    "refreshOutputs\0refresh\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Connections[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    1,   56,    2, 0x0a /* Public */,
       6,    1,   59,    2, 0x0a /* Public */,
       7,    1,   62,    2, 0x0a /* Public */,
       9,    1,   65,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Connections::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Connections *_t = static_cast<Connections *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configureInputDriver(); break;
        case 1: _t->configureOutputDriver(); break;
        case 2: _t->clickedAdvanced((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setMidiThru((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->refreshInputs((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->refreshOutputs((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->refresh(); break;
        case 7: _t->accept(); break;
        default: ;
        }
    }
}

const QMetaObject Connections::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Connections.data,
      qt_meta_data_Connections,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Connections::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Connections::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Connections.stringdata0))
        return static_cast<void*>(const_cast< Connections*>(this));
    return QDialog::qt_metacast(_clname);
}

int Connections::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
