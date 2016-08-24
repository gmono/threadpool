TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp


 LIBS += -L$$PWD/../build-thread_pool-Desktop_Qt_5_3_MSVC2013_64bit-Debug/debug/ -lthread_pool

INCLUDEPATH += $$PWD/../thread_pool
DEPENDPATH += $$PWD/../thread_pool
PRE_TARGETDEPS += $$PWD/../build-thread_pool-Desktop_Qt_5_3_MSVC2013_64bit-Debug/debug/thread_pool.lib
