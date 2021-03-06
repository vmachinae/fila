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
///   File: task.cpp
///
/// Author: $author$
///   Date: 1/11/2020
///////////////////////////////////////////////////////////////////////
#include "vos/platform/os/mach/task.hpp"

namespace vos {
namespace platform {
namespace os {
namespace mach {

} /// namespace mach
} /// namespace os
} /// namespace platform
} /// namespace vos

#if !defined(MACH) && !defined(APPLEOS)
///
/// mach tasks
/// ...
///
mach_port_t mach_task_self(void) {
    return 0;
}
mach_port_t mach_thread_self(void) {
    return 0;
}
///
/// ...
/// mach tasks
///
#endif /// !defined(MACH) && !defined(APPLEOS)

