/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Project/dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[19];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "memory"
QT_MOC_LITERAL(4, 37, 18), // "InterStateBuffers&"
QT_MOC_LITERAL(5, 56, 3), // "isb"
QT_MOC_LITERAL(6, 60, 13), // "MemoryAccess&"
QT_MOC_LITERAL(7, 74, 9), // "memAccess"
QT_MOC_LITERAL(8, 84, 6), // "MUX_Y&"
QT_MOC_LITERAL(9, 91, 4), // "muxy"
QT_MOC_LITERAL(10, 96, 9), // "writeBack"
QT_MOC_LITERAL(11, 106, 10), // "RegUpdate&"
QT_MOC_LITERAL(12, 117, 9), // "regUpdate"
QT_MOC_LITERAL(13, 127, 14), // "Registry_File&"
QT_MOC_LITERAL(14, 142, 5), // "rFile"
QT_MOC_LITERAL(15, 148, 15), // "printOnTextEdit"
QT_MOC_LITERAL(16, 164, 5), // "print"
QT_MOC_LITERAL(17, 170, 1), // "i"
QT_MOC_LITERAL(18, 172, 12) // "printSummary"

    },
    "Dialog\0on_pushButton_clicked\0\0memory\0"
    "InterStateBuffers&\0isb\0MemoryAccess&\0"
    "memAccess\0MUX_Y&\0muxy\0writeBack\0"
    "RegUpdate&\0regUpdate\0Registry_File&\0"
    "rFile\0printOnTextEdit\0print\0i\0"
    "printSummary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    3,   45,    2, 0x08 /* Private */,
      10,    3,   52,    2, 0x08 /* Private */,
      15,    0,   59,    2, 0x08 /* Private */,
      16,    3,   60,    2, 0x08 /* Private */,
      18,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6, 0x80000000 | 8,    5,    7,    9,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 11, 0x80000000 | 13,    5,   12,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, 0x80000000 | 13,   17,    5,   14,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->memory((*reinterpret_cast< InterStateBuffers(*)>(_a[1])),(*reinterpret_cast< MemoryAccess(*)>(_a[2])),(*reinterpret_cast< MUX_Y(*)>(_a[3]))); break;
        case 2: _t->writeBack((*reinterpret_cast< InterStateBuffers(*)>(_a[1])),(*reinterpret_cast< RegUpdate(*)>(_a[2])),(*reinterpret_cast< Registry_File(*)>(_a[3]))); break;
        case 3: _t->printOnTextEdit(); break;
        case 4: _t->print((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< InterStateBuffers(*)>(_a[2])),(*reinterpret_cast< Registry_File(*)>(_a[3]))); break;
        case 5: _t->printSummary((*reinterpret_cast< InterStateBuffers(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dialog.data,
    qt_meta_data_Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
