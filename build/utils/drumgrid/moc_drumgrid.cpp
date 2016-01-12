/****************************************************************************
** Meta object code from reading C++ file 'drumgrid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../utils/drumgrid/drumgrid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drumgrid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DrumGrid_t {
    QByteArrayData data[21];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrumGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrumGrid_t qt_meta_stringdata_DrumGrid = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DrumGrid"
QT_MOC_LITERAL(1, 9, 12), // "signalUpdate"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "bar"
QT_MOC_LITERAL(4, 27, 4), // "beat"
QT_MOC_LITERAL(5, 32, 9), // "slotAbout"
QT_MOC_LITERAL(6, 42, 11), // "slotAboutQt"
QT_MOC_LITERAL(7, 54, 10), // "updateView"
QT_MOC_LITERAL(8, 65, 14), // "sequencerEvent"
QT_MOC_LITERAL(9, 80, 15), // "SequencerEvent*"
QT_MOC_LITERAL(10, 96, 2), // "ev"
QT_MOC_LITERAL(11, 99, 11), // "connectMidi"
QT_MOC_LITERAL(12, 111, 4), // "play"
QT_MOC_LITERAL(13, 116, 4), // "stop"
QT_MOC_LITERAL(14, 121, 11), // "tempoChange"
QT_MOC_LITERAL(15, 133, 8), // "newTempo"
QT_MOC_LITERAL(16, 142, 11), // "gridColumns"
QT_MOC_LITERAL(17, 154, 7), // "columns"
QT_MOC_LITERAL(18, 162, 15), // "shortcutPressed"
QT_MOC_LITERAL(19, 178, 5), // "value"
QT_MOC_LITERAL(20, 184, 13) // "updateDisplay"

    },
    "DrumGrid\0signalUpdate\0\0bar\0beat\0"
    "slotAbout\0slotAboutQt\0updateView\0"
    "sequencerEvent\0SequencerEvent*\0ev\0"
    "connectMidi\0play\0stop\0tempoChange\0"
    "newTempo\0gridColumns\0columns\0"
    "shortcutPressed\0value\0updateDisplay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrumGrid[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   79,    2, 0x0a /* Public */,
       6,    0,   80,    2, 0x0a /* Public */,
       7,    0,   81,    2, 0x0a /* Public */,
       8,    1,   82,    2, 0x0a /* Public */,
      11,    0,   85,    2, 0x0a /* Public */,
      12,    0,   86,    2, 0x0a /* Public */,
      13,    0,   87,    2, 0x0a /* Public */,
      14,    1,   88,    2, 0x0a /* Public */,
      16,    1,   91,    2, 0x0a /* Public */,
      18,    1,   94,    2, 0x0a /* Public */,
      20,    2,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

       0        // eod
};

void DrumGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DrumGrid *_t = static_cast<DrumGrid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->slotAbout(); break;
        case 2: _t->slotAboutQt(); break;
        case 3: _t->updateView(); break;
        case 4: _t->sequencerEvent((*reinterpret_cast< SequencerEvent*(*)>(_a[1]))); break;
        case 5: _t->connectMidi(); break;
        case 6: _t->play(); break;
        case 7: _t->stop(); break;
        case 8: _t->tempoChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->gridColumns((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->shortcutPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->updateDisplay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DrumGrid::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DrumGrid::signalUpdate)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject DrumGrid::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DrumGrid.data,
      qt_meta_data_DrumGrid,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DrumGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrumGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DrumGrid.stringdata0))
        return static_cast<void*>(const_cast< DrumGrid*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DrumGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void DrumGrid::signalUpdate(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
