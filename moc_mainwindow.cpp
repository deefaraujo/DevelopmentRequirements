/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_cudaButton_clicked"
QT_MOC_LITERAL(4, 56, 15), // "buttonCudaColor"
QT_MOC_LITERAL(5, 72, 7), // "success"
QT_MOC_LITERAL(6, 80, 17), // "buttonDockerColor"
QT_MOC_LITERAL(7, 98, 27), // "buttonContainerToolkitColor"
QT_MOC_LITERAL(8, 126, 24), // "buttonDockerComposeColor"
QT_MOC_LITERAL(9, 151, 11), // "installCuda"
QT_MOC_LITERAL(10, 163, 18), // "installCudaToolkit"
QT_MOC_LITERAL(11, 182, 23), // "installContainerToolkit"
QT_MOC_LITERAL(12, 206, 13), // "installDocker"
QT_MOC_LITERAL(13, 220, 20), // "installDockerCompose"
QT_MOC_LITERAL(14, 241, 23), // "on_dockerButton_clicked"
QT_MOC_LITERAL(15, 265, 30), // "on_dockerComposeButton_clicked"
QT_MOC_LITERAL(16, 296, 33) // "on_containerToolkitButton_cli..."

    },
    "MainWindow\0on_pushButton_pressed\0\0"
    "on_cudaButton_clicked\0buttonCudaColor\0"
    "success\0buttonDockerColor\0"
    "buttonContainerToolkitColor\0"
    "buttonDockerComposeColor\0installCuda\0"
    "installCudaToolkit\0installContainerToolkit\0"
    "installDocker\0installDockerCompose\0"
    "on_dockerButton_clicked\0"
    "on_dockerComposeButton_clicked\0"
    "on_containerToolkitButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    1,   86,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       7,    1,   92,    2, 0x08 /* Private */,
       8,    1,   95,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    0,   99,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_pressed(); break;
        case 1: _t->on_cudaButton_clicked(); break;
        case 2: _t->buttonCudaColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->buttonDockerColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->buttonContainerToolkitColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->buttonDockerComposeColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->installCuda(); break;
        case 7: _t->installCudaToolkit(); break;
        case 8: _t->installContainerToolkit(); break;
        case 9: _t->installDocker(); break;
        case 10: _t->installDockerCompose(); break;
        case 11: _t->on_dockerButton_clicked(); break;
        case 12: _t->on_dockerComposeButton_clicked(); break;
        case 13: _t->on_containerToolkitButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
