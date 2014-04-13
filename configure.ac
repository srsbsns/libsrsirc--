#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([libsrsircpp], [0.0.0], [learath2@learath2.info])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SRCDIR([src/testlibsrsircpp.cpp])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
LT_PREREQ([2.4])
AM_PROG_AR
LT_INIT

AC_PROG_CC
AC_PROG_CXX
AC_PROG_INSTALL
AC_PROG_MAKE_SET

AC_CONFIG_FILES([Makefile
		 include/Makefile
		 include/libsrsircpp/Makefile
		 libsrsircpp/Makefile
                 src/Makefile])
AC_OUTPUT
echo \
"-------------------------------------------------

 ${PACKAGE_NAME} Version ${PACKAGE_VERSION}

 Prefix: '${prefix}'.
 C Compiler: '${CC} ${CFLAGS}'
 C++ Compiler: '${CXX} ${CXXFLAGS}'
 Libraries: '${LIBS}'

--------------------------------------------------"
