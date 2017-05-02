/****************************************************************************
** Meta object code from reading C++ file 'denglu.h'
**
** Created: Sat May 25 10:25:27 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "denglu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'denglu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Denglu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    8,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,    7,    7,    7, 0x08,
      54,    7,    7,    7, 0x08,
      81,    7,    7,    7, 0x08,
     107,    7,    7,    7, 0x08,
     133,    7,    7,    7, 0x08,
     159,    7,    7,    7, 0x08,
     185,    7,    7,    7, 0x08,
     211,    7,    7,    7, 0x08,
     237,    7,    7,    7, 0x08,
     263,    7,    7,    7, 0x08,
     289,    7,    7,    7, 0x08,
     315,    7,    7,    7, 0x08,
     338,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Denglu[] = {
    "Denglu\0\0,\0timeReturn(int,int)\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_10_clicked()\0"
    "on_pushButton_9_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_1_clicked()\0"
    "on_outButton_clicked()\0on_inButton_clicked()\0"
};

const QMetaObject Denglu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Denglu,
      qt_meta_data_Denglu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Denglu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Denglu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Denglu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Denglu))
        return static_cast<void*>(const_cast< Denglu*>(this));
    return QWidget::qt_metacast(_clname);
}

int Denglu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: timeReturn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: on_pushButton_clicked(); break;
        case 2: on_pushButton_10_clicked(); break;
        case 3: on_pushButton_9_clicked(); break;
        case 4: on_pushButton_8_clicked(); break;
        case 5: on_pushButton_7_clicked(); break;
        case 6: on_pushButton_6_clicked(); break;
        case 7: on_pushButton_5_clicked(); break;
        case 8: on_pushButton_4_clicked(); break;
        case 9: on_pushButton_3_clicked(); break;
        case 10: on_pushButton_2_clicked(); break;
        case 11: on_pushButton_1_clicked(); break;
        case 12: on_outButton_clicked(); break;
        case 13: on_inButton_clicked(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Denglu::timeReturn(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
