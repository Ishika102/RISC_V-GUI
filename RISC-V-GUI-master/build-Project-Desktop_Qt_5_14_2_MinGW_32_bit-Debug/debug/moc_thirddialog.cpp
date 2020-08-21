/****************************************************************************
** Meta object code from reading C++ file 'thirddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Project/thirddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thirddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_thirdDialog_t {
    QByteArrayData data[22];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_thirdDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_thirdDialog_t qt_meta_stringdata_thirdDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "thirdDialog"
QT_MOC_LITERAL(1, 12, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "updateISB"
QT_MOC_LITERAL(4, 45, 18), // "InterStateBuffers&"
QT_MOC_LITERAL(5, 64, 3), // "isb"
QT_MOC_LITERAL(6, 68, 18), // "updateAfterDecoder"
QT_MOC_LITERAL(7, 87, 13), // "updateIfStall"
QT_MOC_LITERAL(8, 101, 6), // "memory"
QT_MOC_LITERAL(9, 108, 13), // "MemoryAccess&"
QT_MOC_LITERAL(10, 122, 9), // "memAccess"
QT_MOC_LITERAL(11, 132, 6), // "MUX_Y&"
QT_MOC_LITERAL(12, 139, 4), // "muxy"
QT_MOC_LITERAL(13, 144, 9), // "writeBack"
QT_MOC_LITERAL(14, 154, 10), // "RegUpdate&"
QT_MOC_LITERAL(15, 165, 9), // "regUpdate"
QT_MOC_LITERAL(16, 175, 14), // "Registry_File&"
QT_MOC_LITERAL(17, 190, 5), // "rFile"
QT_MOC_LITERAL(18, 196, 15), // "printOnTextEdit"
QT_MOC_LITERAL(19, 212, 5), // "print"
QT_MOC_LITERAL(20, 218, 1), // "i"
QT_MOC_LITERAL(21, 220, 12) // "printSummary"

    },
    "thirdDialog\0on_pushButton_clicked\0\0"
    "updateISB\0InterStateBuffers&\0isb\0"
    "updateAfterDecoder\0updateIfStall\0"
    "memory\0MemoryAccess&\0memAccess\0MUX_Y&\0"
    "muxy\0writeBack\0RegUpdate&\0regUpdate\0"
    "Registry_File&\0rFile\0printOnTextEdit\0"
    "print\0i\0printSummary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_thirdDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       8,    3,   69,    2, 0x08 /* Private */,
      13,    3,   76,    2, 0x08 /* Private */,
      18,    0,   83,    2, 0x08 /* Private */,
      19,    3,   84,    2, 0x08 /* Private */,
      21,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 9, 0x80000000 | 11,    5,   10,   12,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 14, 0x80000000 | 16,    5,   15,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, 0x80000000 | 16,   20,    5,   17,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void thirdDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<thirdDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->updateISB((*reinterpret_cast< InterStateBuffers(*)>(_a[1]))); break;
        case 2: _t->updateAfterDecoder((*reinterpret_cast< InterStateBuffers(*)>(_a[1]))); break;
        case 3: _t->updateIfStall((*reinterpret_cast< InterStateBuffers(*)>(_a[1]))); break;
        case 4: _t->memory((*reinterpret_cast< InterStateBuffers(*)>(_a[1])),(*reinterpret_cast< MemoryAccess(*)>(_a[2])),(*reinterpret_cast< MUX_Y(*)>(_a[3]))); break;
        case 5: _t->writeBack((*reinterpret_cast< InterStateBuffers(*)>(_a[1])),(*reinterpret_cast< RegUpdate(*)>(_a[2])),(*reinterpret_cast< Registry_File(*)>(_a[3]))); break;
        case 6: _t->printOnTextEdit(); break;
        case 7: _t->print((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< InterStateBuffers(*)>(_a[2])),(*reinterpret_cast< Registry_File(*)>(_a[3]))); break;
        case 8: _t->printSummary((*reinterpret_cast< InterStateBuffers(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject thirdDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_thirdDialog.data,
    qt_meta_data_thirdDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *thirdDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *thirdDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_thirdDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int thirdDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
