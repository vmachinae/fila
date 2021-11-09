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
#   File: semaphore.pri
#
# Author: $author$
#   Date: 8/26/2021
#
# QtCreator .pri file for fila executable semaphore
########################################################################

########################################################################
# semaphore

# semaphore TARGET
#
semaphore_TARGET = semaphore

# semaphore INCLUDEPATH
#
semaphore_INCLUDEPATH += \
$${fila_INCLUDEPATH} \

# semaphore DEFINES
#
semaphore_DEFINES += \
$${fila_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
VOS_APP_CONSOLE_SEMAPHORE_MAIN_INSTANCE \

########################################################################
# semaphore OBJECTIVE_HEADERS
#
#semaphore_OBJECTIVE_HEADERS += \
#$${FILA_SRC}/vos/app/console/main.hh \

# semaphore OBJECTIVE_SOURCES
#
#semaphore_OBJECTIVE_SOURCES += \
#$${FILA_SRC}/vos/app/console/main.mm \

########################################################################
# semaphore HEADERS
#
semaphore_HEADERS += \
$${ROSTRA_SRC}/vos/platform//os/posix/sys/time.h \
$${ROSTRA_SRC}/vos/platform//os/posix/sys/time.hpp \
$${ROSTRA_SRC}/vos/platform//os/oses.hpp \
\
$${NADIR_SRC}/vos/base/acquired.hpp \
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
$${NADIR_SRC}/vos/console/main_main.hpp \
\
$${FILA_SRC}/vos/mt/semaphore.hpp \
$${FILA_SRC}/vos/mt/apple/mach/semaphore.hpp \
$${FILA_SRC}/vos/mt/apple/osx/semaphore.hpp \
$${FILA_SRC}/vos/mt/linux/semaphore.hpp \
$${FILA_SRC}/vos/mt/mach/semaphore.hpp \
$${FILA_SRC}/vos/mt/microsoft/windows/semaphore.hpp \
$${FILA_SRC}/vos/mt/oracle/solaris/semaphore.hpp \
$${FILA_SRC}/vos/mt/posix/semaphore.hpp \
$${FILA_SRC}/vos/mt/os/posix/semaphore.hpp \
$${FILA_SRC}/vos/mt/os/semaphore.hpp \
$${FILA_SRC}/vos/mt/os/os.hpp \
\
$${FILA_SRC}/vos/app/console/mt/semaphore/main_opt.hpp \
$${FILA_SRC}/vos/app/console/mt/semaphore/main.hpp \
$${FILA_SRC}/vos/app/console/semaphore/main_opt.hpp \
$${FILA_SRC}/vos/app/console/semaphore/main.hpp \

# semaphore SOURCES
#
semaphore_SOURCES += \
$${NADIR_SRC}/vos/os/sleep.cpp \
$${NADIR_SRC}/vos/os/oses.cpp \
\
$${FILA_SRC}/vos/mt/os/os.cpp \
\
$${FILA_SRC}/vos/app/console/semaphore/main_opt.cpp \
$${FILA_SRC}/vos/app/console/semaphore/main.cpp \
\
$${NADIR_SRC}/vos/console/main_main.cpp \

########################################################################
# semaphore FRAMEWORKS
#
semaphore_FRAMEWORKS += \
$${fila_FRAMEWORKS} \

# semaphore LIBS
#
semaphore_LIBS += \
$${fila_LIBS} \

########################################################################
# NO Qt
QT -= gui core
