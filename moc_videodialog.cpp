/****************************************************************************
** Meta object code from reading C++ file 'videodialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "videodialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videodialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoDialog_t {
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoDialog_t qt_meta_stringdata_VideoDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VideoDialog"
QT_MOC_LITERAL(1, 12, 4), // "Face"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 23), // "on_streamButton_clicked"
QT_MOC_LITERAL(4, 42, 12), // "onReadStream"
QT_MOC_LITERAL(5, 55, 14), // "onReadSnapshot"
QT_MOC_LITERAL(6, 70, 20) // "on_getButton_clicked"

    },
    "VideoDialog\0Face\0\0on_streamButton_clicked\0"
    "onReadStream\0onReadSnapshot\0"
    "on_getButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   42,    2, 0x08 /* Private */,
       4,    0,   43,    2, 0x08 /* Private */,
       5,    0,   44,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VideoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoDialog *_t = static_cast<VideoDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Face((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->on_streamButton_clicked(); break;
        case 2: _t->onReadStream(); break;
        case 3: _t->onReadSnapshot(); break;
        case 4: _t->on_getButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VideoDialog::*_t)(QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoDialog::Face)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject VideoDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_VideoDialog.data,
      qt_meta_data_VideoDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VideoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoDialog.stringdata0))
        return static_cast<void*>(const_cast< VideoDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int VideoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void VideoDialog::Face(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
