/****************************************************************************
** Meta object code from reading C++ file 'vpiano.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../utils/vpiano/vpiano.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vpiano.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VPiano_t {
    QByteArrayData data[14];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VPiano_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VPiano_t qt_meta_stringdata_VPiano = {
    {
QT_MOC_LITERAL(0, 0, 6), // "VPiano"
QT_MOC_LITERAL(1, 7, 12), // "readSettings"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "writeSettings"
QT_MOC_LITERAL(4, 35, 9), // "slotAbout"
QT_MOC_LITERAL(5, 45, 11), // "slotAboutQt"
QT_MOC_LITERAL(6, 57, 15), // "slotConnections"
QT_MOC_LITERAL(7, 73, 15), // "slotPreferences"
QT_MOC_LITERAL(8, 89, 10), // "slotNoteOn"
QT_MOC_LITERAL(9, 100, 8), // "midiNote"
QT_MOC_LITERAL(10, 109, 3), // "vel"
QT_MOC_LITERAL(11, 113, 4), // "chan"
QT_MOC_LITERAL(12, 118, 4), // "note"
QT_MOC_LITERAL(13, 123, 11) // "slotNoteOff"

    },
    "VPiano\0readSettings\0\0writeSettings\0"
    "slotAbout\0slotAboutQt\0slotConnections\0"
    "slotPreferences\0slotNoteOn\0midiNote\0"
    "vel\0chan\0note\0slotNoteOff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VPiano[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    2,   70,    2, 0x0a /* Public */,
       8,    3,   75,    2, 0x0a /* Public */,
      13,    2,   82,    2, 0x0a /* Public */,
      13,    3,   87,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   10,

       0        // eod
};

void VPiano::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VPiano *_t = static_cast<VPiano *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readSettings(); break;
        case 1: _t->writeSettings(); break;
        case 2: _t->slotAbout(); break;
        case 3: _t->slotAboutQt(); break;
        case 4: _t->slotConnections(); break;
        case 5: _t->slotPreferences(); break;
        case 6: _t->slotNoteOn((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: _t->slotNoteOn((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 8: _t->slotNoteOff((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 9: _t->slotNoteOff((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject VPiano::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_VPiano.data,
      qt_meta_data_VPiano,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VPiano::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VPiano::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VPiano.stringdata0))
        return static_cast<void*>(const_cast< VPiano*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int VPiano::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
