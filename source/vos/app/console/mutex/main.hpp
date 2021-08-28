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
///   File: main.hpp
///
/// Author: $author$
///   Date: 12/26/2019
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_MUTEX_MAIN_HPP
#define VOS_APP_CONSOLE_MUTEX_MAIN_HPP

#include "vos/app/console/mutex/main_opt.hpp"
#include "vos/mt/microsoft/windows/mutex.hpp"
#include "vos/mt/apple/osx/mutex.hpp"
#include "vos/mt/oracle/solaris/mutex.hpp"
#include "vos/mt/mach/mutex.hpp"
#include "vos/mt/posix/mutex.hpp"
#include "vos/mt/linux/mutex.hpp"
#include "vos/mt/os/mutex.hpp"
#include "vos/mt/os/posix/mutex.hpp"
#include "vos/mt/mutex.hpp"

namespace vos {
namespace app {
namespace console {
namespace mutex {

/// class maint
template 
<class TExtends = main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
    }

protected:
    /// ...run
    virtual int windows_run(int argc, char_t** argv, char_t** env) {
        int err = this->template run< ::vos::mt::microsoft::windows::mutex >();
        return err;
    }
    virtual int osx_run(int argc, char_t** argv, char_t** env) {
        int err = this->template run< ::vos::mt::apple::osx::mutex >();
        return err;
    }
    virtual int solaris_run(int argc, char_t** argv, char_t** env) {
        int err = this->template run< ::vos::mt::oracle::solaris::mutex >();
        return err;
    }
    virtual int mach_run(int argc, char_t** argv, char_t** env) {
        int err = this->template run< ::vos::mt::mach::mutex >();
        return err;
    }
    virtual int linux_run(int argc, char_t** argv, char_t** env) {
        int err = this->template run< ::vos::mt::linux::mutex >();
        return err;
    }
    virtual int posix_run(int argc, char_t** argv, char_t** env) {
        int err = this->template run< ::vos::mt::posix::mutex >();
        return err;
    }
    virtual int to_posix_run(int argc, char_t** argv, char_t** env) {
        int err = this->template run< ::vos::mt::os::posix::mutex >();
        return err;
    }
    virtual int os_run(int argc, char_t** argv, char_t** env) {
        int err = this->template run< ::vos::mt::os::mutex >();
        return err;
    }
    virtual int derived_run(int argc, char_t** argv, char_t** env) {
        int err = this->template run< ::vos::mt::derived::mutex >();
        return err;
    }
    virtual int default_run(int argc, char_t** argv, char_t** env) {
        int err = this->os_run(argc, argv, env);
        return err;
    }
}; /// class maint
typedef maint<> main;

} /// namespace mutex
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_MUTEX_MAIN_HPP
