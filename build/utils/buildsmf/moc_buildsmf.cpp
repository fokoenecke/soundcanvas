/****************************************************************************
** Meta object code from reading C++ file 'buildsmf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../utils/buildsmf/buildsmf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buildsmf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSMFBuilder_t {
    QByteArrayData data[6];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSMFBuilder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSMFBuilder_t qt_meta_stringdata_QSMFBuilder = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QSMFBuilder"
QT_MOC_LITERAL(1, 12, 12), // "errorHandler"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "errorStr"
QT_MOC_LITERAL(4, 35, 12), // "trackHandler"
QT_MOC_LITERAL(5, 48, 5) // "track"

    },
    "QSMFBuilder\0errorHandler\0\0errorStr\0"
    "trackHandler\0track"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSMFBuilder[] = {

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
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void QSMFBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSMFBuilder *_t = static_cast<QSMFBuilder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorHandler((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->trackHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QSMFBuilder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSMFBuilder.data,
      qt_meta_data_QSMFBuilder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSMFBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSMFBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSMFBuilder.stringdata0))
        return static_cast<void*>(const_cast< QSMFBuilder*>(this));
    return QObject::qt_metacast(_clname);
}

int QSMFBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
