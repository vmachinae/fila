///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2019 $organization$
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
///   File: process.cpp
///
/// Author: $author$
///   Date: 1/14/2020
///////////////////////////////////////////////////////////////////////
#include "vos/mt/os/process.hpp"

#if defined(WINDOWS)  
#include "vos/mt/microsoft/windows/process.cpp"
#elif defined(APPLEOSX)  
#include "vos/mt/apple/osx/process.cpp"
#elif defined(APPLEIOS)  
#include "vos/mt/apple/ios/process.cpp"
#elif defined(SOLARIS)  
#include "vos/mt/oracle/solaris/process.cpp"
#elif defined(MACH)  
#include "vos/mt/mach/process.cpp"
#elif defined(LINUX)  
#include "vos/mt/linux/process.cpp"
#else /// defined(LINUX)  
#include "vos/mt/posix/process.cpp"
#endif /// defined(LINUX) 

namespace vos {
namespace mt {
namespace os {

} /// namespace os
} /// namespace mt
} /// namespace vos
