/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created: Sat Jun 22 16:24:19 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Window[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      32,    7,    7,    7, 0x08,
      61,    7,    7,    7, 0x08,
      87,    7,    7,    7, 0x08,
     112,    7,    7,    7, 0x08,
     138,    7,    7,    7, 0x08,
     161,    7,    7,    7, 0x08,
     178,  170,    7,    7, 0x08,
     195,    7,    7,    7, 0x08,
     205,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Window[] = {
    "Window\0\0on_pushButton_clicked()\0"
    "on_guangzhaoButton_clicked()\0"
    "on_fengliButton_clicked()\0"
    "on_wenduButton_clicked()\0"
    "on_searchButton_clicked()\0"
    "on_outButton_clicked()\0myslot()\0shi,fen\0"
    "gettime(int,int)\0readnum()\0sendnum()\0"
};

const QMetaObject Window::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Window,
      qt_meta_data_Window, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Window::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Window::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Window))
        return static_cast<void*>(const_cast< Window*>(this));
    return QWidget::qt_metacast(_clname);
}

int Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_guangzhaoButton_clicked(); break;
        case 2: on_fengliButton_clicked(); break;
        case 3: on_wenduButton_clicked(); break;
        case 4: on_searchButton_clicked(); break;
        case 5: on_outButton_clicked(); break;
        case 6: myslot(); break;
        case 7: gettime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: readnum(); break;
        case 9: sendnum(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
