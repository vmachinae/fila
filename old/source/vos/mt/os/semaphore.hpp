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
///   File: semaphore.hpp
///
/// Author: $author$
///   Date: 1/6/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_MT_OS_SEMAPHORE_HPP
#define VOS_MT_OS_SEMAPHORE_HPP

#include "vos/mt/os/os.hpp"

#if defined(WINDOWS)  
#include "vos/mt/microsoft/windows/semaphore.hpp"
#elif defined(APPLEOSX)  
#include "vos/mt/apple/osx/semaphore.hpp"
#elif defined(APPLEIOS)  
#include "vos/mt/apple/ios/semaphore.hpp"
#elif defined(SOLARIS)  
#include "vos/mt/oracle/solaris/semaphore.hpp"
#elif defined(MACH)
#include "vos/mt/mach/semaphore.hpp"
#elif defined(LINUX)
#include "vos/mt/linux/semaphore.hpp"
#else /// defined(LINUX)  
#include "vos/mt/posix/semaphore.hpp"
#endif /// defined(LINUX) 

namespace vos {
namespace mt {
namespace os {

typedef os::semaphore semaphore;

} /// namespace os
} /// namespace mt
} /// namespace vos

#endif /// ndef VOS_MT_OS_SEMAPHORE_HPP 
