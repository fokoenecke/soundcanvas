/****************************************************************************
** Meta object code from reading C++ file 'ossoutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/rt-backends/oss-out/ossoutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossoutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_drumstick__rt__OSSOutput_t {
    QByteArrayData data[19];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_drumstick__rt__OSSOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_drumstick__rt__OSSOutput_t qt_meta_stringdata_drumstick__rt__OSSOutput = {
    {
QT_MOC_LITERAL(0, 0, 24), // "drumstick::rt::OSSOutput"
QT_MOC_LITERAL(1, 25, 11), // "sendNoteOff"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "chan"
QT_MOC_LITERAL(4, 43, 4), // "note"
QT_MOC_LITERAL(5, 48, 3), // "vel"
QT_MOC_LITERAL(6, 52, 10), // "sendNoteOn"
QT_MOC_LITERAL(7, 63, 15), // "sendKeyPressure"
QT_MOC_LITERAL(8, 79, 5), // "value"
QT_MOC_LITERAL(9, 85, 14), // "sendController"
QT_MOC_LITERAL(10, 100, 7), // "control"
QT_MOC_LITERAL(11, 108, 11), // "sendProgram"
QT_MOC_LITERAL(12, 120, 7), // "program"
QT_MOC_LITERAL(13, 128, 19), // "sendChannelPressure"
QT_MOC_LITERAL(14, 148, 13), // "sendPitchBend"
QT_MOC_LITERAL(15, 162, 9), // "sendSysex"
QT_MOC_LITERAL(16, 172, 4), // "data"
QT_MOC_LITERAL(17, 177, 13), // "sendSystemMsg"
QT_MOC_LITERAL(18, 191, 6) // "status"

    },
    "drumstick::rt::OSSOutput\0sendNoteOff\0"
    "\0chan\0note\0vel\0sendNoteOn\0sendKeyPressure\0"
    "value\0sendController\0control\0sendProgram\0"
    "program\0sendChannelPressure\0sendPitchBend\0"
    "sendSysex\0data\0sendSystemMsg\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_drumstick__rt__OSSOutput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   59,    2, 0x0a /* Public */,
       6,    3,   66,    2, 0x0a /* Public */,
       7,    3,   73,    2, 0x0a /* Public */,
       9,    3,   80,    2, 0x0a /* Public */,
      11,    2,   87,    2, 0x0a /* Public */,
      13,    2,   92,    2, 0x0a /* Public */,
      14,    2,   97,    2, 0x0a /* Public */,
      15,    1,  102,    2, 0x0a /* Public */,
      17,    1,  105,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,   10,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    8,
    QMetaType::Void, QMetaType::QByteArray,   16,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void drumstick::rt::OSSOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OSSOutput *_t = static_cast<OSSOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendNoteOff((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->sendNoteOn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->sendKeyPressure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->sendController((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->sendProgram((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->sendChannelPressure((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->sendPitchBend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->sendSysex((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: _t->sendSystemMsg((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject drumstick::rt::OSSOutput::staticMetaObject = {
    { &MIDIOutput::staticMetaObject, qt_meta_stringdata_drumstick__rt__OSSOutput.data,
      qt_meta_data_drumstick__rt__OSSOutput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *drumstick::rt::OSSOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *drumstick::rt::OSSOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_drumstick__rt__OSSOutput.stringdata0))
        return static_cast<void*>(const_cast< OSSOutput*>(this));
    if (!strcmp(_clname, "net.sourceforge.drumstick.rt.MIDIOutput/1.0"))
        return static_cast< drumstick::rt::MIDIOutput*>(const_cast< OSSOutput*>(this));
    return MIDIOutput::qt_metacast(_clname);
}

int drumstick::rt::OSSOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MIDIOutput::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '\'', 0x00, 'n',  'e',  't',  '.',  's',  'o', 
    'u',  'r',  'c',  'e',  'f',  'o',  'r',  'g', 
    'e',  '.',  'd',  'r',  'u',  'm',  's',  't', 
    'i',  'c',  'k',  '.',  'r',  't',  '.',  'M', 
    'I',  'D',  'I',  'O',  'u',  't',  'p',  'u', 
    't',  0x00, 0x00, 0x00, 0x9b, 0x0a, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x09, 0x00, 'O',  'S', 
    'S',  'O',  'u',  't',  'p',  'u',  't',  0x00,
    0x1a, 0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x11, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, 'p',  0x00, 0x00, 0x00,
    '`',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '\'', 0x00, 'n',  'e',  't',  '.',  's',  'o', 
    'u',  'r',  'c',  'e',  'f',  'o',  'r',  'g', 
    'e',  '.',  'd',  'r',  'u',  'm',  's',  't', 
    'i',  'c',  'k',  '.',  'r',  't',  '.',  'M', 
    'I',  'D',  'I',  'O',  'u',  't',  'p',  'u', 
    't',  0x00, 0x00, 0x00, 0x95, 0x0a, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0e, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x09, 0x00, 'O',  'S',  'S',  'O',  'u',  't', 
    'p',  'u',  't',  0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x1a, 0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    '`',  0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace drumstick;
using namespace drumstick::rt;
QT_MOC_EXPORT_PLUGIN(drumstick::rt::OSSOutput, OSSOutput)

QT_END_MOC_NAMESPACE
