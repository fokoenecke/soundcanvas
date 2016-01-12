/****************************************************************************
** Meta object code from reading C++ file 'netmidiinput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/rt-backends/net-in/netmidiinput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netmidiinput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_drumstick__rt__NetMIDIInput_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_drumstick__rt__NetMIDIInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_drumstick__rt__NetMIDIInput_t qt_meta_stringdata_drumstick__rt__NetMIDIInput = {
    {
QT_MOC_LITERAL(0, 0, 27) // "drumstick::rt::NetMIDIInput"

    },
    "drumstick::rt::NetMIDIInput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_drumstick__rt__NetMIDIInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void drumstick::rt::NetMIDIInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject drumstick::rt::NetMIDIInput::staticMetaObject = {
    { &MIDIInput::staticMetaObject, qt_meta_stringdata_drumstick__rt__NetMIDIInput.data,
      qt_meta_data_drumstick__rt__NetMIDIInput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *drumstick::rt::NetMIDIInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *drumstick::rt::NetMIDIInput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_drumstick__rt__NetMIDIInput.stringdata0))
        return static_cast<void*>(const_cast< NetMIDIInput*>(this));
    if (!strcmp(_clname, "net.sourceforge.drumstick.rt.MIDIInput/1.0"))
        return static_cast< drumstick::rt::MIDIInput*>(const_cast< NetMIDIInput*>(this));
    return MIDIInput::qt_metacast(_clname);
}

int drumstick::rt::NetMIDIInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MIDIInput::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
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
    '&',  0x00, 'n',  'e',  't',  '.',  's',  'o', 
    'u',  'r',  'c',  'e',  'f',  'o',  'r',  'g', 
    'e',  '.',  'd',  'r',  'u',  'm',  's',  't', 
    'i',  'c',  'k',  '.',  'r',  't',  '.',  'M', 
    'I',  'D',  'I',  'I',  'n',  'p',  'u',  't', 
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0c, 0x00, 'N',  'e',  't',  'M',  'I',  'D', 
    'I',  'I',  'n',  'p',  'u',  't',  0x00, 0x00,
    0x1a, 0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x11, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, 'p',  0x00, 0x00, 0x00,
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
    '&',  0x00, 'n',  'e',  't',  '.',  's',  'o', 
    'u',  'r',  'c',  'e',  'f',  'o',  'r',  'g', 
    'e',  '.',  'd',  'r',  'u',  'm',  's',  't', 
    'i',  'c',  'k',  '.',  'r',  't',  '.',  'M', 
    'I',  'D',  'I',  'I',  'n',  'p',  'u',  't', 
    0x15, 0x0a, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9b, 0x0d, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0c, 0x00, 'N',  'e', 
    't',  'M',  'I',  'D',  'I',  'I',  'n',  'p', 
    'u',  't',  0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x1a, 0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    '\\', 0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace drumstick;
using namespace drumstick::rt;
QT_MOC_EXPORT_PLUGIN(drumstick::rt::NetMIDIInput, NetMIDIInput)

QT_END_MOC_NAMESPACE
