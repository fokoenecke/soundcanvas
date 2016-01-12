/****************************************************************************
** Meta object code from reading C++ file 'guiplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../utils/guiplayer/guiplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guiplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GUIPlayer_t {
    QByteArrayData data[93];
    char stringdata0[1007];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GUIPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GUIPlayer_t qt_meta_stringdata_GUIPlayer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GUIPlayer"
QT_MOC_LITERAL(1, 10, 5), // "about"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "aboutQt"
QT_MOC_LITERAL(4, 25, 4), // "play"
QT_MOC_LITERAL(5, 30, 5), // "pause"
QT_MOC_LITERAL(6, 36, 4), // "stop"
QT_MOC_LITERAL(7, 41, 4), // "open"
QT_MOC_LITERAL(8, 46, 5), // "setup"
QT_MOC_LITERAL(9, 52, 10), // "tempoReset"
QT_MOC_LITERAL(10, 63, 11), // "volumeReset"
QT_MOC_LITERAL(11, 75, 11), // "tempoSlider"
QT_MOC_LITERAL(12, 87, 5), // "value"
QT_MOC_LITERAL(13, 93, 4), // "quit"
QT_MOC_LITERAL(14, 98, 12), // "volumeSlider"
QT_MOC_LITERAL(15, 111, 10), // "pitchShift"
QT_MOC_LITERAL(16, 122, 12), // "songFinished"
QT_MOC_LITERAL(17, 135, 13), // "playerStopped"
QT_MOC_LITERAL(18, 149, 14), // "sequencerEvent"
QT_MOC_LITERAL(19, 164, 15), // "SequencerEvent*"
QT_MOC_LITERAL(20, 180, 2), // "ev"
QT_MOC_LITERAL(21, 183, 14), // "smfHeaderEvent"
QT_MOC_LITERAL(22, 198, 6), // "format"
QT_MOC_LITERAL(23, 205, 5), // "ntrks"
QT_MOC_LITERAL(24, 211, 8), // "division"
QT_MOC_LITERAL(25, 220, 14), // "smfNoteOnEvent"
QT_MOC_LITERAL(26, 235, 4), // "chan"
QT_MOC_LITERAL(27, 240, 5), // "pitch"
QT_MOC_LITERAL(28, 246, 3), // "vol"
QT_MOC_LITERAL(29, 250, 15), // "smfNoteOffEvent"
QT_MOC_LITERAL(30, 266, 16), // "smfKeyPressEvent"
QT_MOC_LITERAL(31, 283, 5), // "press"
QT_MOC_LITERAL(32, 289, 17), // "smfCtlChangeEvent"
QT_MOC_LITERAL(33, 307, 3), // "ctl"
QT_MOC_LITERAL(34, 311, 17), // "smfPitchBendEvent"
QT_MOC_LITERAL(35, 329, 15), // "smfProgramEvent"
QT_MOC_LITERAL(36, 345, 5), // "patch"
QT_MOC_LITERAL(37, 351, 17), // "smfChanPressEvent"
QT_MOC_LITERAL(38, 369, 13), // "smfSysexEvent"
QT_MOC_LITERAL(39, 383, 4), // "data"
QT_MOC_LITERAL(40, 388, 13), // "smfTempoEvent"
QT_MOC_LITERAL(41, 402, 5), // "tempo"
QT_MOC_LITERAL(42, 408, 15), // "smfErrorHandler"
QT_MOC_LITERAL(43, 424, 8), // "errorStr"
QT_MOC_LITERAL(44, 433, 21), // "smfUpdateLoadProgress"
QT_MOC_LITERAL(45, 455, 21), // "wrkUpdateLoadProgress"
QT_MOC_LITERAL(46, 477, 15), // "wrkErrorHandler"
QT_MOC_LITERAL(47, 493, 13), // "wrkFileHeader"
QT_MOC_LITERAL(48, 507, 4), // "verh"
QT_MOC_LITERAL(49, 512, 4), // "verl"
QT_MOC_LITERAL(50, 517, 12), // "wrkEndOfFile"
QT_MOC_LITERAL(51, 530, 17), // "wrkStreamEndEvent"
QT_MOC_LITERAL(52, 548, 4), // "time"
QT_MOC_LITERAL(53, 553, 14), // "wrkTrackHeader"
QT_MOC_LITERAL(54, 568, 5), // "name1"
QT_MOC_LITERAL(55, 574, 5), // "name2"
QT_MOC_LITERAL(56, 580, 7), // "trackno"
QT_MOC_LITERAL(57, 588, 7), // "channel"
QT_MOC_LITERAL(58, 596, 8), // "velocity"
QT_MOC_LITERAL(59, 605, 4), // "port"
QT_MOC_LITERAL(60, 610, 8), // "selected"
QT_MOC_LITERAL(61, 619, 5), // "muted"
QT_MOC_LITERAL(62, 625, 4), // "loop"
QT_MOC_LITERAL(63, 630, 11), // "wrkTimeBase"
QT_MOC_LITERAL(64, 642, 8), // "timebase"
QT_MOC_LITERAL(65, 651, 12), // "wrkNoteEvent"
QT_MOC_LITERAL(66, 664, 5), // "track"
QT_MOC_LITERAL(67, 670, 3), // "dur"
QT_MOC_LITERAL(68, 674, 16), // "wrkKeyPressEvent"
QT_MOC_LITERAL(69, 691, 17), // "wrkCtlChangeEvent"
QT_MOC_LITERAL(70, 709, 17), // "wrkPitchBendEvent"
QT_MOC_LITERAL(71, 727, 15), // "wrkProgramEvent"
QT_MOC_LITERAL(72, 743, 17), // "wrkChanPressEvent"
QT_MOC_LITERAL(73, 761, 13), // "wrkSysexEvent"
QT_MOC_LITERAL(74, 775, 4), // "bank"
QT_MOC_LITERAL(75, 780, 17), // "wrkSysexEventBank"
QT_MOC_LITERAL(76, 798, 4), // "name"
QT_MOC_LITERAL(77, 803, 8), // "autosend"
QT_MOC_LITERAL(78, 812, 13), // "wrkTempoEvent"
QT_MOC_LITERAL(79, 826, 13), // "wrkTrackPatch"
QT_MOC_LITERAL(80, 840, 17), // "wrkNewTrackHeader"
QT_MOC_LITERAL(81, 858, 11), // "wrkTrackVol"
QT_MOC_LITERAL(82, 870, 12), // "wrkTrackBank"
QT_MOC_LITERAL(83, 883, 15), // "oveErrorHandler"
QT_MOC_LITERAL(84, 899, 13), // "oveFileHeader"
QT_MOC_LITERAL(85, 913, 7), // "quarter"
QT_MOC_LITERAL(86, 921, 10), // "trackCount"
QT_MOC_LITERAL(87, 932, 14), // "oveNoteOnEvent"
QT_MOC_LITERAL(88, 947, 4), // "tick"
QT_MOC_LITERAL(89, 952, 15), // "oveNoteOffEvent"
QT_MOC_LITERAL(90, 968, 13), // "oveTrackPatch"
QT_MOC_LITERAL(91, 982, 11), // "oveTrackVol"
QT_MOC_LITERAL(92, 994, 12) // "oveTrackBank"

    },
    "GUIPlayer\0about\0\0aboutQt\0play\0pause\0"
    "stop\0open\0setup\0tempoReset\0volumeReset\0"
    "tempoSlider\0value\0quit\0volumeSlider\0"
    "pitchShift\0songFinished\0playerStopped\0"
    "sequencerEvent\0SequencerEvent*\0ev\0"
    "smfHeaderEvent\0format\0ntrks\0division\0"
    "smfNoteOnEvent\0chan\0pitch\0vol\0"
    "smfNoteOffEvent\0smfKeyPressEvent\0press\0"
    "smfCtlChangeEvent\0ctl\0smfPitchBendEvent\0"
    "smfProgramEvent\0patch\0smfChanPressEvent\0"
    "smfSysexEvent\0data\0smfTempoEvent\0tempo\0"
    "smfErrorHandler\0errorStr\0smfUpdateLoadProgress\0"
    "wrkUpdateLoadProgress\0wrkErrorHandler\0"
    "wrkFileHeader\0verh\0verl\0wrkEndOfFile\0"
    "wrkStreamEndEvent\0time\0wrkTrackHeader\0"
    "name1\0name2\0trackno\0channel\0velocity\0"
    "port\0selected\0muted\0loop\0wrkTimeBase\0"
    "timebase\0wrkNoteEvent\0track\0dur\0"
    "wrkKeyPressEvent\0wrkCtlChangeEvent\0"
    "wrkPitchBendEvent\0wrkProgramEvent\0"
    "wrkChanPressEvent\0wrkSysexEvent\0bank\0"
    "wrkSysexEventBank\0name\0autosend\0"
    "wrkTempoEvent\0wrkTrackPatch\0"
    "wrkNewTrackHeader\0wrkTrackVol\0"
    "wrkTrackBank\0oveErrorHandler\0oveFileHeader\0"
    "quarter\0trackCount\0oveNoteOnEvent\0"
    "tick\0oveNoteOffEvent\0oveTrackPatch\0"
    "oveTrackVol\0oveTrackBank"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUIPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  289,    2, 0x0a /* Public */,
       3,    0,  290,    2, 0x0a /* Public */,
       4,    0,  291,    2, 0x0a /* Public */,
       5,    0,  292,    2, 0x0a /* Public */,
       6,    0,  293,    2, 0x0a /* Public */,
       7,    0,  294,    2, 0x0a /* Public */,
       8,    0,  295,    2, 0x0a /* Public */,
       9,    0,  296,    2, 0x0a /* Public */,
      10,    0,  297,    2, 0x0a /* Public */,
      11,    1,  298,    2, 0x0a /* Public */,
      13,    0,  301,    2, 0x0a /* Public */,
      14,    1,  302,    2, 0x0a /* Public */,
      15,    1,  305,    2, 0x0a /* Public */,
      16,    0,  308,    2, 0x0a /* Public */,
      17,    0,  309,    2, 0x0a /* Public */,
      18,    1,  310,    2, 0x0a /* Public */,
      21,    3,  313,    2, 0x0a /* Public */,
      25,    3,  320,    2, 0x0a /* Public */,
      29,    3,  327,    2, 0x0a /* Public */,
      30,    3,  334,    2, 0x0a /* Public */,
      32,    3,  341,    2, 0x0a /* Public */,
      34,    2,  348,    2, 0x0a /* Public */,
      35,    2,  353,    2, 0x0a /* Public */,
      37,    2,  358,    2, 0x0a /* Public */,
      38,    1,  363,    2, 0x0a /* Public */,
      40,    1,  366,    2, 0x0a /* Public */,
      42,    1,  369,    2, 0x0a /* Public */,
      44,    0,  372,    2, 0x0a /* Public */,
      45,    0,  373,    2, 0x0a /* Public */,
      46,    1,  374,    2, 0x0a /* Public */,
      47,    2,  377,    2, 0x0a /* Public */,
      50,    0,  382,    2, 0x0a /* Public */,
      51,    1,  383,    2, 0x0a /* Public */,
      53,   10,  386,    2, 0x0a /* Public */,
      63,    1,  407,    2, 0x0a /* Public */,
      65,    6,  410,    2, 0x0a /* Public */,
      68,    5,  423,    2, 0x0a /* Public */,
      69,    5,  434,    2, 0x0a /* Public */,
      70,    4,  445,    2, 0x0a /* Public */,
      71,    4,  454,    2, 0x0a /* Public */,
      72,    4,  463,    2, 0x0a /* Public */,
      73,    3,  472,    2, 0x0a /* Public */,
      75,    5,  479,    2, 0x0a /* Public */,
      78,    2,  490,    2, 0x0a /* Public */,
      79,    2,  495,    2, 0x0a /* Public */,
      80,    9,  500,    2, 0x0a /* Public */,
      81,    2,  519,    2, 0x0a /* Public */,
      82,    2,  524,    2, 0x0a /* Public */,
      83,    1,  529,    2, 0x0a /* Public */,
      84,    2,  532,    2, 0x0a /* Public */,
      87,    5,  537,    2, 0x0a /* Public */,
      89,    5,  548,    2, 0x0a /* Public */,
      90,    3,  559,    2, 0x0a /* Public */,
      91,    3,  566,    2, 0x0a /* Public */,
      92,    3,  573,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   22,   23,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   26,   27,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   26,   27,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   26,   27,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   26,   33,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   31,
    QMetaType::Void, QMetaType::QByteArray,   39,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   48,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Long,   52,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   54,   55,   56,   57,   27,   58,   59,   60,   61,   62,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   66,   52,   26,   27,   28,   67,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int,   66,   52,   26,   27,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int,   66,   52,   26,   33,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int,   66,   52,   26,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int,   66,   52,   26,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int,   66,   52,   26,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int,   66,   52,   74,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool, QMetaType::Int, QMetaType::QByteArray,   74,   76,   77,   59,   39,
    QMetaType::Void, QMetaType::Long, QMetaType::Int,   52,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   66,   36,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   76,   56,   57,   27,   58,   59,   60,   61,   62,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   66,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   66,   74,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   85,   86,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int,   66,   88,   57,   27,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int,   66,   88,   57,   27,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   66,   57,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   66,   57,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   66,   57,   74,

       0        // eod
};

void GUIPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GUIPlayer *_t = static_cast<GUIPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->about(); break;
        case 1: _t->aboutQt(); break;
        case 2: _t->play(); break;
        case 3: _t->pause(); break;
        case 4: _t->stop(); break;
        case 5: _t->open(); break;
        case 6: _t->setup(); break;
        case 7: _t->tempoReset(); break;
        case 8: _t->volumeReset(); break;
        case 9: _t->tempoSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->quit(); break;
        case 11: _t->volumeSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->pitchShift((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->songFinished(); break;
        case 14: _t->playerStopped(); break;
        case 15: _t->sequencerEvent((*reinterpret_cast< SequencerEvent*(*)>(_a[1]))); break;
        case 16: _t->smfHeaderEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 17: _t->smfNoteOnEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->smfNoteOffEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->smfKeyPressEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: _t->smfCtlChangeEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 21: _t->smfPitchBendEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->smfProgramEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->smfChanPressEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->smfSysexEvent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 25: _t->smfTempoEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->smfErrorHandler((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->smfUpdateLoadProgress(); break;
        case 28: _t->wrkUpdateLoadProgress(); break;
        case 29: _t->wrkErrorHandler((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->wrkFileHeader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->wrkEndOfFile(); break;
        case 32: _t->wrkStreamEndEvent((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 33: _t->wrkTrackHeader((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])),(*reinterpret_cast< bool(*)>(_a[10]))); break;
        case 34: _t->wrkTimeBase((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->wrkNoteEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 36: _t->wrkKeyPressEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 37: _t->wrkCtlChangeEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 38: _t->wrkPitchBendEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 39: _t->wrkProgramEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 40: _t->wrkChanPressEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 41: _t->wrkSysexEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 42: _t->wrkSysexEventBank((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QByteArray(*)>(_a[5]))); break;
        case 43: _t->wrkTempoEvent((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->wrkTrackPatch((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->wrkNewTrackHeader((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 46: _t->wrkTrackVol((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 47: _t->wrkTrackBank((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 48: _t->oveErrorHandler((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 49: _t->oveFileHeader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 50: _t->oveNoteOnEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 51: _t->oveNoteOffEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 52: _t->oveTrackPatch((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 53: _t->oveTrackVol((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 54: _t->oveTrackBank((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject GUIPlayer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GUIPlayer.data,
      qt_meta_data_GUIPlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GUIPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUIPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GUIPlayer.stringdata0))
        return static_cast<void*>(const_cast< GUIPlayer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GUIPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 55;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
