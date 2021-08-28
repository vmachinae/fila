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
///   File: condition.cpp
///
/// Author: $author$
///   Date: 1/14/2020
///////////////////////////////////////////////////////////////////////
#include "vos/mt/os/condition.hpp"

#if defined(WINDOWS)  
#include "vos/mt/microsoft/windows/condition.cpp"
#elif defined(APPLEOSX)  
#include "vos/mt/apple/osx/condition.cpp"
#elif defined(APPLEIOS)  
#include "vos/mt/apple/ios/condition.cpp"
#elif defined(SOLARIS)  
#include "vos/mt/oracle/solaris/condition.cpp"
#elif defined(MACH)  
#include "vos/mt/mach/condition.cpp"
#elif defined(LINUX)  
#include "vos/mt/linux/condition.cpp"
#else /// defined(LINUX)  
#include "vos/mt/posix/condition.cpp"
#endif /// defined(LINUX) 

namespace vos {
namespace mt {
namespace os {

} /// namespace os
} /// namespace mt
} /// namespace vos
