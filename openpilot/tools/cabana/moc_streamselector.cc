/****************************************************************************
** Meta object code from reading C++ file 'streamselector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "streamselector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractOpenStreamWidget_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractOpenStreamWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractOpenStreamWidget_t qt_meta_stringdata_AbstractOpenStreamWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "AbstractOpenStreamWidget"
QT_MOC_LITERAL(1, 25, 16), // "enableOpenButton"
QT_MOC_LITERAL(2, 42, 0) // ""

    },
    "AbstractOpenStreamWidget\0enableOpenButton\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractOpenStreamWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void AbstractOpenStreamWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractOpenStreamWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->enableOpenButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractOpenStreamWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractOpenStreamWidget::enableOpenButton)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AbstractOpenStreamWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AbstractOpenStreamWidget.data,
    qt_meta_data_AbstractOpenStreamWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractOpenStreamWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractOpenStreamWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractOpenStreamWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AbstractOpenStreamWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void AbstractOpenStreamWidget::enableOpenButton(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OpenReplayWidget_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenReplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenReplayWidget_t qt_meta_stringdata_OpenReplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 16) // "OpenReplayWidget"

    },
    "OpenReplayWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenReplayWidget[] = {

 // content:
       8,       // revision
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

void OpenReplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OpenReplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractOpenStreamWidget::staticMetaObject>(),
    qt_meta_stringdata_OpenReplayWidget.data,
    qt_meta_data_OpenReplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenReplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenReplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenReplayWidget.stringdata0))
        return static_cast<void*>(this);
    return AbstractOpenStreamWidget::qt_metacast(_clname);
}

int OpenReplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractOpenStreamWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OpenPandaWidget_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenPandaWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenPandaWidget_t qt_meta_stringdata_OpenPandaWidget = {
    {
QT_MOC_LITERAL(0, 0, 15) // "OpenPandaWidget"

    },
    "OpenPandaWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenPandaWidget[] = {

 // content:
       8,       // revision
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

void OpenPandaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OpenPandaWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractOpenStreamWidget::staticMetaObject>(),
    qt_meta_stringdata_OpenPandaWidget.data,
    qt_meta_data_OpenPandaWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenPandaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenPandaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenPandaWidget.stringdata0))
        return static_cast<void*>(this);
    return AbstractOpenStreamWidget::qt_metacast(_clname);
}

int OpenPandaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractOpenStreamWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OpenDeviceWidget_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenDeviceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenDeviceWidget_t qt_meta_stringdata_OpenDeviceWidget = {
    {
QT_MOC_LITERAL(0, 0, 16) // "OpenDeviceWidget"

    },
    "OpenDeviceWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenDeviceWidget[] = {

 // content:
       8,       // revision
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

void OpenDeviceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OpenDeviceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractOpenStreamWidget::staticMetaObject>(),
    qt_meta_stringdata_OpenDeviceWidget.data,
    qt_meta_data_OpenDeviceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenDeviceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenDeviceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenDeviceWidget.stringdata0))
        return static_cast<void*>(this);
    return AbstractOpenStreamWidget::qt_metacast(_clname);
}

int OpenDeviceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractOpenStreamWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StreamSelector_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StreamSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StreamSelector_t qt_meta_stringdata_StreamSelector = {
    {
QT_MOC_LITERAL(0, 0, 14) // "StreamSelector"

    },
    "StreamSelector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StreamSelector[] = {

 // content:
       8,       // revision
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

void StreamSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject StreamSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_StreamSelector.data,
    qt_meta_data_StreamSelector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StreamSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StreamSelector.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int StreamSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
