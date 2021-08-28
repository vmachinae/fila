///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2020 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: semaphores.cpp
///
/// Author: $author$
///   Date: 1/6/2020
///////////////////////////////////////////////////////////////////////
#include "vos/mt/semaphores.hpp"
#include "vos/platform/os/platform/semaphore.cpp"

#if defined(APPLEOSX) || defined(WINDOWS)
#include "vos/platform/os/posix/semaphore.cpp"
#endif /// defined(APPLEOSX) || defined(WINDOWS)

#if !defined(MACH)
#include "vos/platform/os/mach/semaphore.cpp"
#endif /// !defined(MACH)

#if !defined(SOLARIS)
#include "vos/platform/os/oracle/solaris/semaphore.cpp"
#endif /// !defined(SOLARIS)

#if !defined(WINDOWS)
#include "vos/platform/os/microsoft/windows/Semaphore.cpp"
#endif /// !defined(WINDOWS)

namespace vos {
namespace mt {

} /// namespace mt
} /// namespace vos
