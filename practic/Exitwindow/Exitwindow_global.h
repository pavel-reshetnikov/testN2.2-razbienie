#ifndef EXITWINDOW_GLOBAL_H
#define EXITWINDOW_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(EXITWINDOW_LIBRARY)
#  define EXITWINDOW_EXPORT Q_DECL_EXPORT
#else
#  define EXITWINDOW_EXPORT Q_DECL_IMPORT
#endif

#endif // EXITWINDOW_GLOBAL_H
