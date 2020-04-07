#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QTWIDGETTEST_LIB)
#  define QTWIDGETTEST_EXPORT Q_DECL_EXPORT
# else
#  define QTWIDGETTEST_EXPORT Q_DECL_IMPORT
# endif
#else
# define QTWIDGETTEST_EXPORT
#endif
