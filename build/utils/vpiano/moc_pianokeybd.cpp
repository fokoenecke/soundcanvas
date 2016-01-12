/****************************************************************************
** Meta object code from reading C++ file 'pianokeybd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../utils/vpiano/pianokeybd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pianokeybd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PianoKeybd_t {
    QByteArrayData data[13];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PianoKeybd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PianoKeybd_t qt_meta_stringdata_PianoKeybd = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PianoKeybd"
QT_MOC_LITERAL(1, 11, 6), // "noteOn"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "midiNote"
QT_MOC_LITERAL(4, 28, 3), // "vel"
QT_MOC_LITERAL(5, 32, 7), // "noteOff"
QT_MOC_LITERAL(6, 40, 10), // "baseOctave"
QT_MOC_LITERAL(7, 51, 7), // "numKeys"
QT_MOC_LITERAL(8, 59, 8), // "rotation"
QT_MOC_LITERAL(9, 68, 15), // "keyPressedColor"
QT_MOC_LITERAL(10, 84, 10), // "showLabels"
QT_MOC_LITERAL(11, 95, 8), // "useFlats"
QT_MOC_LITERAL(12, 104, 9) // "transpose"

    },
    "PianoKeybd\0noteOn\0\0midiNote\0vel\0noteOff\0"
    "baseOctave\0numKeys\0rotation\0keyPressedColor\0"
    "showLabels\0useFlats\0transpose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PianoKeybd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       7,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       5,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Int, 0x00095103,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::QColor, 0x00095103,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::Bool, 0x00095103,
      12, QMetaType::Int, 0x00095103,

       0        // eod
};

void PianoKeybd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PianoKeybd *_t = static_cast<PianoKeybd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->noteOn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->noteOff((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PianoKeybd::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PianoKeybd::noteOn)) {
                *result = 0;
            }
        }
        {
            typedef void (PianoKeybd::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PianoKeybd::noteOff)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PianoKeybd *_t = static_cast<PianoKeybd *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->baseOctave(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->numKeys(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getRotation(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getKeyPressedColor(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showLabels(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->useFlats(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getTranspose(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PianoKeybd *_t = static_cast<PianoKeybd *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBaseOctave(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setNumKeys(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setRotation(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setKeyPressedColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setShowLabels(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setUseFlats(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setTranspose(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PianoKeybd::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_PianoKeybd.data,
      qt_meta_data_PianoKeybd,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PianoKeybd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PianoKeybd::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PianoKeybd.stringdata0))
        return static_cast<void*>(const_cast< PianoKeybd*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int PianoKeybd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PianoKeybd::noteOn(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PianoKeybd::noteOff(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
