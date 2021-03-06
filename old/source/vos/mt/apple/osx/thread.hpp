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
///   File: thread.hpp
///
/// Author: $author$
///   Date: 1/21/2020
///////////////////////////////////////////////////////////////////////
#ifndef _VOS_MT_APPLE_OSX_THREAD_HPP_
#define _VOS_MT_APPLE_OSX_THREAD_HPP_

#include "vos/mt/posix/thread.hpp"

namespace vos {
namespace mt {
namespace apple {
namespace osx {

typedef posix::thread thread;

} /// namespace osx
} /// namespace apple
} /// namespace mt
} /// namespace vos

#endif /// _VOS_MT_APPLE_OSX_THREAD_HPP_
