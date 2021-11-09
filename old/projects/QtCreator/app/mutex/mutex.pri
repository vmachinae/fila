########################################################################
# Copyright (c) 1988-2021 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: mutex.pri
#
# Author: $author$
#   Date: 8/26/2021
#
# QtCreator .pri file for fila executable mutex
########################################################################

########################################################################
# mutex

# mutex TARGET
#
mutex_TARGET = mutex

# mutex INCLUDEPATH
#
mutex_INCLUDEPATH += \
$${fila_INCLUDEPATH} \

# mutex DEFINES
#
mutex_DEFINES += \
$${fila_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
VOS_APP_CONSOLE_MUTEX_MAIN_INSTANCE \

########################################################################
# mutex OBJECTIVE_HEADERS
#
#mutex_OBJECTIVE_HEADERS += \
#$${FILA_SRC}/vos/app/console/main.hh \

# mutex OBJECTIVE_SOURCES
#
#mutex_OBJECTIVE_SOURCES += \
#$${FILA_SRC}/vos/app/console/main.mm \

########################################################################
# mutex HEADERS
#
mutex_HEADERS += \
$${NADIR_SRC}/vos/base/locked.hpp \
\
$${ROSTRA_SRC}/vos/platform/os/posix/sys/time.h \
$${ROSTRA_SRC}/vos/platform/os/posix/sys/time.hpp \
$${ROSTRA_SRC}/vos/platform/os/oses.hpp \
\
$${NADIR_SRC}/vos/os/os.hpp \
$${NADIR_SRC}/vos/os/sleep.hpp \
$${NADIR_SRC}/vos/os/linux/sleep.hpp \
$${NADIR_SRC}/vos/os/posix/sleep.hpp \
$${NADIR_SRC}/vos/os/apple/osx/sleep.hpp \
$${NADIR_SRC}/vos/os/time.hpp \
$${NADIR_SRC}/vos/os/linux/time.hpp \
$${NADIR_SRC}/vos/os/posix/time.hpp \
$${NADIR_SRC}/vos/os/apple/osx/time.hpp \
$${NADIR_SRC}/vos/os/oses.hpp \
\
$${FILA_SRC}/vos/platform/microsoft/windows/posix/mutex.h \
$${FILA_SRC}/vos/platform/microsoft/windows/posix/mutex.hpp \
\
$${FILA_SRC}/vos/platform/microsoft/windows/os/mutex.h \
$${FILA_SRC}/vos/platform/microsoft/windows/os/mutex.hpp \
\
$${FILA_SRC}/vos/platform/os/microsoft/windows/Mutex.h \
$${FILA_SRC}/vos/platform/os/microsoft/windows/Mutex.hpp \
\
$${FILA_SRC}/vos/platform/os/oracle/solaris/mutex.h \
$${FILA_SRC}/vos/platform/os/oracle/solaris/mutex.hpp \
\
$${FILA_SRC}/vos/platform/os/mach/lock_set.h \
$${FILA_SRC}/vos/platform/os/mach/lock_set.hpp \
\
$${FILA_SRC}/vos/platform/os/posix/mutex.h \
$${FILA_SRC}/vos/platform/os/posix/mutex.hpp \
\
$${FILA_SRC}/vos/platform/os/platform/mutex.h \
$${FILA_SRC}/vos/platform/os/platform/mutex.hpp \
\
$${FILA_SRC}/vos/mt/apple/osx/mutex.hpp \
$${FILA_SRC}/vos/mt/linux/mutex.hpp \
$${FILA_SRC}/vos/mt/mach/mutex.hpp \
$${FILA_SRC}/vos/mt/microsoft/windows/mutex.hpp \
$${FILA_SRC}/vos/mt/mutex.hpp \
$${FILA_SRC}/vos/mt/oracle/solaris/mutex.hpp \
$${FILA_SRC}/vos/mt/os/os.hpp \
$${FILA_SRC}/vos/mt/os/mutex.hpp \
$${FILA_SRC}/vos/mt/os/posix/mutex.hpp \
$${FILA_SRC}/vos/mt/posix/mutex.hpp \
$${FILA_SRC}/vos/mt/mutexes.hpp \
\
$${FILA_SRC}/vos/app/console/mt/mutex/main_opt.hpp \
$${FILA_SRC}/vos/app/console/mt/mutex/main.hpp \
\
$${FILA_SRC}/vos/app/console/mutex/main_opt.hpp \
$${FILA_SRC}/vos/app/console/mutex/main.hpp \
\
$${NADIR_SRC}/vos/console/main_main.hpp \

# mutex SOURCES
#
mutex_SOURCES += \
$${NADIR_SRC}/vos/os/sleep.cpp \
$${NADIR_SRC}/vos/os/oses.cpp \
\
$${FILA_SRC}/vos/mt/os/os.cpp \
$${FILA_SRC}/vos/mt/mutexes.cpp \
\
$${FILA_SRC}/vos/app/console/mutex/main_opt.cpp \
$${FILA_SRC}/vos/app/console/mutex/main.cpp \
\
$${NADIR_SRC}/vos/console/main_main.cpp \

########################################################################
# mutex FRAMEWORKS
#
mutex_FRAMEWORKS += \
$${fila_FRAMEWORKS} \

# mutex LIBS
#
mutex_LIBS += \
$${fila_LIBS} \

########################################################################
# NO Qt
QT -= gui core

