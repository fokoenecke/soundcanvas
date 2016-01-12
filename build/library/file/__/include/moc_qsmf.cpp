/****************************************************************************
** Meta object code from reading C++ file 'qsmf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../library/include/qsmf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsmf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_drumstick__QSmf_t {
    QByteArrayData data[51];
    char stringdata0[618];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_drumstick__QSmf_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_drumstick__QSmf_t qt_meta_stringdata_drumstick__QSmf = {
    {
QT_MOC_LITERAL(0, 0, 15), // "drumstick::QSmf"
QT_MOC_LITERAL(1, 16, 14), // "signalSMFError"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "errorStr"
QT_MOC_LITERAL(4, 41, 15), // "signalSMFHeader"
QT_MOC_LITERAL(5, 57, 6), // "format"
QT_MOC_LITERAL(6, 64, 5), // "ntrks"
QT_MOC_LITERAL(7, 70, 8), // "division"
QT_MOC_LITERAL(8, 79, 15), // "signalSMFNoteOn"
QT_MOC_LITERAL(9, 95, 4), // "chan"
QT_MOC_LITERAL(10, 100, 5), // "pitch"
QT_MOC_LITERAL(11, 106, 3), // "vol"
QT_MOC_LITERAL(12, 110, 16), // "signalSMFNoteOff"
QT_MOC_LITERAL(13, 127, 17), // "signalSMFKeyPress"
QT_MOC_LITERAL(14, 145, 5), // "press"
QT_MOC_LITERAL(15, 151, 18), // "signalSMFCtlChange"
QT_MOC_LITERAL(16, 170, 3), // "ctl"
QT_MOC_LITERAL(17, 174, 5), // "value"
QT_MOC_LITERAL(18, 180, 18), // "signalSMFPitchBend"
QT_MOC_LITERAL(19, 199, 16), // "signalSMFProgram"
QT_MOC_LITERAL(20, 216, 5), // "patch"
QT_MOC_LITERAL(21, 222, 18), // "signalSMFChanPress"
QT_MOC_LITERAL(22, 241, 14), // "signalSMFSysex"
QT_MOC_LITERAL(23, 256, 4), // "data"
QT_MOC_LITERAL(24, 261, 20), // "signalSMFSeqSpecific"
QT_MOC_LITERAL(25, 282, 25), // "signalSMFMetaUnregistered"
QT_MOC_LITERAL(26, 308, 3), // "typ"
QT_MOC_LITERAL(27, 312, 17), // "signalSMFMetaMisc"
QT_MOC_LITERAL(28, 330, 20), // "signalSMFSequenceNum"
QT_MOC_LITERAL(29, 351, 3), // "seq"
QT_MOC_LITERAL(30, 355, 22), // "signalSMFforcedChannel"
QT_MOC_LITERAL(31, 378, 7), // "channel"
QT_MOC_LITERAL(32, 386, 19), // "signalSMFforcedPort"
QT_MOC_LITERAL(33, 406, 4), // "port"
QT_MOC_LITERAL(34, 411, 13), // "signalSMFText"
QT_MOC_LITERAL(35, 425, 14), // "signalSMFSmpte"
QT_MOC_LITERAL(36, 440, 2), // "b0"
QT_MOC_LITERAL(37, 443, 2), // "b1"
QT_MOC_LITERAL(38, 446, 2), // "b2"
QT_MOC_LITERAL(39, 449, 2), // "b3"
QT_MOC_LITERAL(40, 452, 2), // "b4"
QT_MOC_LITERAL(41, 455, 16), // "signalSMFTimeSig"
QT_MOC_LITERAL(42, 472, 15), // "signalSMFKeySig"
QT_MOC_LITERAL(43, 488, 14), // "signalSMFTempo"
QT_MOC_LITERAL(44, 503, 5), // "tempo"
QT_MOC_LITERAL(45, 509, 19), // "signalSMFendOfTrack"
QT_MOC_LITERAL(46, 529, 19), // "signalSMFTrackStart"
QT_MOC_LITERAL(47, 549, 17), // "signalSMFTrackEnd"
QT_MOC_LITERAL(48, 567, 24), // "signalSMFWriteTempoTrack"
QT_MOC_LITERAL(49, 592, 19), // "signalSMFWriteTrack"
QT_MOC_LITERAL(50, 612, 5) // "track"

    },
    "drumstick::QSmf\0signalSMFError\0\0"
    "errorStr\0signalSMFHeader\0format\0ntrks\0"
    "division\0signalSMFNoteOn\0chan\0pitch\0"
    "vol\0signalSMFNoteOff\0signalSMFKeyPress\0"
    "press\0signalSMFCtlChange\0ctl\0value\0"
    "signalSMFPitchBend\0signalSMFProgram\0"
    "patch\0signalSMFChanPress\0signalSMFSysex\0"
    "data\0signalSMFSeqSpecific\0"
    "signalSMFMetaUnregistered\0typ\0"
    "signalSMFMetaMisc\0signalSMFSequenceNum\0"
    "seq\0signalSMFforcedChannel\0channel\0"
    "signalSMFforcedPort\0port\0signalSMFText\0"
    "signalSMFSmpte\0b0\0b1\0b2\0b3\0b4\0"
    "signalSMFTimeSig\0signalSMFKeySig\0"
    "signalSMFTempo\0tempo\0signalSMFendOfTrack\0"
    "signalSMFTrackStart\0signalSMFTrackEnd\0"
    "signalSMFWriteTempoTrack\0signalSMFWriteTrack\0"
    "track"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_drumstick__QSmf[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       4,    3,  147,    2, 0x06 /* Public */,
       8,    3,  154,    2, 0x06 /* Public */,
      12,    3,  161,    2, 0x06 /* Public */,
      13,    3,  168,    2, 0x06 /* Public */,
      15,    3,  175,    2, 0x06 /* Public */,
      18,    2,  182,    2, 0x06 /* Public */,
      19,    2,  187,    2, 0x06 /* Public */,
      21,    2,  192,    2, 0x06 /* Public */,
      22,    1,  197,    2, 0x06 /* Public */,
      24,    1,  200,    2, 0x06 /* Public */,
      25,    2,  203,    2, 0x06 /* Public */,
      27,    2,  208,    2, 0x06 /* Public */,
      28,    1,  213,    2, 0x06 /* Public */,
      30,    1,  216,    2, 0x06 /* Public */,
      32,    1,  219,    2, 0x06 /* Public */,
      34,    2,  222,    2, 0x06 /* Public */,
      35,    5,  227,    2, 0x06 /* Public */,
      41,    4,  238,    2, 0x06 /* Public */,
      42,    2,  247,    2, 0x06 /* Public */,
      43,    1,  252,    2, 0x06 /* Public */,
      45,    0,  255,    2, 0x06 /* Public */,
      46,    0,  256,    2, 0x06 /* Public */,
      47,    0,  257,    2, 0x06 /* Public */,
      48,    0,  258,    2, 0x06 /* Public */,
      49,    1,  259,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   10,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   14,
    QMetaType::Void, QMetaType::QByteArray,   23,
    QMetaType::Void, QMetaType::QByteArray,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   26,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   26,   23,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   26,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   36,   37,   38,   39,   40,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   36,   37,   38,   39,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   36,   37,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   50,

       0        // eod
};

void drumstick::QSmf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSmf *_t = static_cast<QSmf *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSMFError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->signalSMFHeader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->signalSMFNoteOn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->signalSMFNoteOff((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->signalSMFKeyPress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->signalSMFCtlChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->signalSMFPitchBend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->signalSMFProgram((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->signalSMFChanPress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->signalSMFSysex((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 10: _t->signalSMFSeqSpecific((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->signalSMFMetaUnregistered((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 12: _t->signalSMFMetaMisc((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 13: _t->signalSMFSequenceNum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->signalSMFforcedChannel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->signalSMFforcedPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->signalSMFText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->signalSMFSmpte((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 18: _t->signalSMFTimeSig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 19: _t->signalSMFKeySig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->signalSMFTempo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->signalSMFendOfTrack(); break;
        case 22: _t->signalSMFTrackStart(); break;
        case 23: _t->signalSMFTrackEnd(); break;
        case 24: _t->signalSMFWriteTempoTrack(); break;
        case 25: _t->signalSMFWriteTrack((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QSmf::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFError)) {
                *result = 0;
            }
        }
        {
            typedef void (QSmf::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFHeader)) {
                *result = 1;
            }
        }
        {
            typedef void (QSmf::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFNoteOn)) {
                *result = 2;
            }
        }
        {
            typedef void (QSmf::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFNoteOff)) {
                *result = 3;
            }
        }
        {
            typedef void (QSmf::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFKeyPress)) {
                *result = 4;
            }
        }
        {
            typedef void (QSmf::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFCtlChange)) {
                *result = 5;
            }
        }
        {
            typedef void (QSmf::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFPitchBend)) {
                *result = 6;
            }
        }
        {
            typedef void (QSmf::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFProgram)) {
                *result = 7;
            }
        }
        {
            typedef void (QSmf::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFChanPress)) {
                *result = 8;
            }
        }
        {
            typedef void (QSmf::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFSysex)) {
                *result = 9;
            }
        }
        {
            typedef void (QSmf::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFSeqSpecific)) {
                *result = 10;
            }
        }
        {
            typedef void (QSmf::*_t)(int , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFMetaUnregistered)) {
                *result = 11;
            }
        }
        {
            typedef void (QSmf::*_t)(int , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFMetaMisc)) {
                *result = 12;
            }
        }
        {
            typedef void (QSmf::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFSequenceNum)) {
                *result = 13;
            }
        }
        {
            typedef void (QSmf::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFforcedChannel)) {
                *result = 14;
            }
        }
        {
            typedef void (QSmf::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFforcedPort)) {
                *result = 15;
            }
        }
        {
            typedef void (QSmf::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFText)) {
                *result = 16;
            }
        }
        {
            typedef void (QSmf::*_t)(int , int , int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFSmpte)) {
                *result = 17;
            }
        }
        {
            typedef void (QSmf::*_t)(int , int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFTimeSig)) {
                *result = 18;
            }
        }
        {
            typedef void (QSmf::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFKeySig)) {
                *result = 19;
            }
        }
        {
            typedef void (QSmf::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFTempo)) {
                *result = 20;
            }
        }
        {
            typedef void (QSmf::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFendOfTrack)) {
                *result = 21;
            }
        }
        {
            typedef void (QSmf::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFTrackStart)) {
                *result = 22;
            }
        }
        {
            typedef void (QSmf::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFTrackEnd)) {
                *result = 23;
            }
        }
        {
            typedef void (QSmf::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFWriteTempoTrack)) {
                *result = 24;
            }
        }
        {
            typedef void (QSmf::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSmf::signalSMFWriteTrack)) {
                *result = 25;
            }
        }
    }
}

const QMetaObject drumstick::QSmf::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_drumstick__QSmf.data,
      qt_meta_data_drumstick__QSmf,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *drumstick::QSmf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *drumstick::QSmf::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_drumstick__QSmf.stringdata0))
        return static_cast<void*>(const_cast< QSmf*>(this));
    return QObject::qt_metacast(_clname);
}

int drumstick::QSmf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void drumstick::QSmf::signalSMFError(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void drumstick::QSmf::signalSMFHeader(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void drumstick::QSmf::signalSMFNoteOn(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void drumstick::QSmf::signalSMFNoteOff(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void drumstick::QSmf::signalSMFKeyPress(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void drumstick::QSmf::signalSMFCtlChange(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void drumstick::QSmf::signalSMFPitchBend(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void drumstick::QSmf::signalSMFProgram(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void drumstick::QSmf::signalSMFChanPress(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void drumstick::QSmf::signalSMFSysex(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void drumstick::QSmf::signalSMFSeqSpecific(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void drumstick::QSmf::signalSMFMetaUnregistered(int _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void drumstick::QSmf::signalSMFMetaMisc(int _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void drumstick::QSmf::signalSMFSequenceNum(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void drumstick::QSmf::signalSMFforcedChannel(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void drumstick::QSmf::signalSMFforcedPort(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void drumstick::QSmf::signalSMFText(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void drumstick::QSmf::signalSMFSmpte(int _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void drumstick::QSmf::signalSMFTimeSig(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void drumstick::QSmf::signalSMFKeySig(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void drumstick::QSmf::signalSMFTempo(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void drumstick::QSmf::signalSMFendOfTrack()
{
    QMetaObject::activate(this, &staticMetaObject, 21, Q_NULLPTR);
}

// SIGNAL 22
void drumstick::QSmf::signalSMFTrackStart()
{
    QMetaObject::activate(this, &staticMetaObject, 22, Q_NULLPTR);
}

// SIGNAL 23
void drumstick::QSmf::signalSMFTrackEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 23, Q_NULLPTR);
}

// SIGNAL 24
void drumstick::QSmf::signalSMFWriteTempoTrack()
{
    QMetaObject::activate(this, &staticMetaObject, 24, Q_NULLPTR);
}

// SIGNAL 25
void drumstick::QSmf::signalSMFWriteTrack(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}
QT_END_MOC_NAMESPACE
