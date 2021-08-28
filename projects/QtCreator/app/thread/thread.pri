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
#   File: thread.pri
#
# Author: $author$
#   Date: 8/26/2021
#
# QtCreator .pri file for fila executable thread
########################################################################

########################################################################
# thread

# thread TARGET
#
thread_TARGET = thread

# thread INCLUDEPATH
#
thread_INCLUDEPATH += \
$${fila_INCLUDEPATH} \

# thread DEFINES
#
thread_DEFINES += \
$${fila_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
VOS_APP_CONSOLE_THREAD_MAIN_INSTANCE \

########################################################################
# thread OBJECTIVE_HEADERS
#
#thread_OBJECTIVE_HEADERS += \
#$${FILA_SRC}/vos/app/console/main.hh \

# thread OBJECTIVE_SOURCES
#
#thread_OBJECTIVE_SOURCES += \
#$${FILA_SRC}/vos/app/console/main.mm \

########################################################################
# thread HEADERS
#
thread_HEADERS += \
$${NADIR_SRC}/vos/platform/thread.h \
$${NADIR_SRC}/vos/platform/thread.hpp \
$${NADIR_SRC}/vos/platform/os/platform/thread.hpp \
$${NADIR_SRC}/vos/platform/os/microsoft/windows/Thread.h \
$${NADIR_SRC}/vos/platform/os/microsoft/windows/Thread.hpp \
\
$${NADIR_SRC}/vos/base/ran.hpp \
$${NADIR_SRC}/vos/base/suspended.hpp \
$${NADIR_SRC}/vos/base/resumed.hpp \
$${NADIR_SRC}/vos/base/forked.hpp \
$${NADIR_SRC}/vos/base/joined.hpp \
\
$${NADIR_SRC}/vos/console/io.hpp \
\
$${FILA_SRC}/vos/mt/thread.hpp \
$${FILA_SRC}/vos/mt/posix/thread.hpp \
$${FILA_SRC}/vos/mt/os/thread.hpp \
$${FILA_SRC}/vos/mt/threads.hpp \
\
$${FILA_SRC}/vos/app/console/mt/thread/main_opt.hpp \
$${FILA_SRC}/vos/app/console/mt/thread/main.hpp \
\
$${FILA_SRC}/vos/app/console/thread/main_opt.hpp \
$${FILA_SRC}/vos/app/console/thread/main.hpp \
\
$${NADIR_SRC}/vos/console/main_main.hpp \

# thread SOURCES
#
thread_SOURCES += \
$${NADIR_SRC}/vos/base/ran.cpp \
$${NADIR_SRC}/vos/base/suspended.cpp \
$${NADIR_SRC}/vos/base/resumed.cpp \
$${NADIR_SRC}/vos/base/forked.cpp \
$${NADIR_SRC}/vos/base/joined.cpp \
\
$${NADIR_SRC}/vos/os/sleep.cpp \
$${NADIR_SRC}/vos/os/oses.cpp \
\
$${FILA_SRC}/vos/mt/os/os.cpp \
$${FILA_SRC}/vos/mt/os/mutex.cpp \
$${FILA_SRC}/vos/mt/mutexes.cpp \
$${FILA_SRC}/vos/mt/threads.cpp \
\
$${FILA_SRC}/vos/app/console/thread/main_opt.cpp \
$${FILA_SRC}/vos/app/console/thread/main.cpp \
\
$${NADIR_SRC}/vos/console/main_main.cpp \

########################################################################
# thread FRAMEWORKS
#
thread_FRAMEWORKS += \
$${fila_FRAMEWORKS} \

# thread LIBS
#
thread_LIBS += \
$${fila_LIBS} \

