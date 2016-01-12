/****************************************************************************
** Meta object code from reading C++ file 'playthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../library/include/playthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_drumstick__SequencerOutputThread_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_drumstick__SequencerOutputThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_drumstick__SequencerOutputThread_t qt_meta_stringdata_drumstick__SequencerOutputThread = {
    {
QT_MOC_LITERAL(0, 0, 32), // "drumstick::SequencerOutputThread"
QT_MOC_LITERAL(1, 33, 8), // "finished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 7), // "stopped"
QT_MOC_LITERAL(4, 51, 5), // "start"
QT_MOC_LITERAL(5, 57, 8), // "Priority"
QT_MOC_LITERAL(6, 66, 8) // "priority"

    },
    "drumstick::SequencerOutputThread\0"
    "finished\0\0stopped\0start\0Priority\0"
    "priority"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_drumstick__SequencerOutputThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x0a /* Public */,
       4,    0,   39,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void drumstick::SequencerOutputThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SequencerOutputThread *_t = static_cast<SequencerOutputThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->stopped(); break;
        case 2: _t->start((*reinterpret_cast< Priority(*)>(_a[1]))); break;
        case 3: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SequencerOutputThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SequencerOutputThread::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (SequencerOutputThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SequencerOutputThread::stopped)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject drumstick::SequencerOutputThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_drumstick__SequencerOutputThread.data,
      qt_meta_data_drumstick__SequencerOutputThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *drumstick::SequencerOutputThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *drumstick::SequencerOutputThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_drumstick__SequencerOutputThread.stringdata0))
        return static_cast<void*>(const_cast< SequencerOutputThread*>(this));
    return QThread::qt_metacast(_clname);
}

int drumstick::SequencerOutputThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void drumstick::SequencerOutputThread::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void drumstick::SequencerOutputThread::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
