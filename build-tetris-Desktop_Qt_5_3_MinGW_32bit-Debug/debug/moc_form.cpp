/****************************************************************************
** Meta object code from reading C++ file 'form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tetris/form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_form_t {
    QByteArrayData data[9];
    char stringdata[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_form_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_form_t qt_meta_stringdata_form = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 12),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 23),
QT_MOC_LITERAL(4, 43, 16),
QT_MOC_LITERAL(5, 60, 7),
QT_MOC_LITERAL(6, 68, 7),
QT_MOC_LITERAL(7, 76, 7),
QT_MOC_LITERAL(8, 84, 10)
    },
    "form\0score_change\0\0pausebutton_change_text\0"
    "send_next_figure\0figure*\0refresh\0"
    "newgame\0pause_game"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,
       4,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   51,    2, 0x0a /* Public */,
       7,    0,   52,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        form *_t = static_cast<form *>(_o);
        switch (_id) {
        case 0: _t->score_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pausebutton_change_text(); break;
        case 2: _t->send_next_figure((*reinterpret_cast< figure*(*)>(_a[1]))); break;
        case 3: _t->refresh(); break;
        case 4: _t->newgame(); break;
        case 5: _t->pause_game(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (form::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&form::score_change)) {
                *result = 0;
            }
        }
        {
            typedef void (form::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&form::pausebutton_change_text)) {
                *result = 1;
            }
        }
        {
            typedef void (form::*_t)(figure * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&form::send_next_figure)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_form.data,
      qt_meta_data_form,  qt_static_metacall, 0, 0}
};


const QMetaObject *form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *form::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_form.stringdata))
        return static_cast<void*>(const_cast< form*>(this));
    return QWidget::qt_metacast(_clname);
}

int form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void form::score_change(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void form::pausebutton_change_text()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void form::send_next_figure(figure * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
