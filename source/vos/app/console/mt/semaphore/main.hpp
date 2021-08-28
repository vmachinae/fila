///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
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
///   Date: 8/2/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_MT_SEMAPHORE_MAIN_HPP
#define VOS_APP_CONSOLE_MT_SEMAPHORE_MAIN_HPP

#include "vos/app/console/mt/semaphore/main_opt.hpp"
#include "vos/mt/semaphore.hpp"

namespace vos {
namespace app {
namespace console {
namespace mt {
namespace semaphore {

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
    /// run
    int run(::vos::acquired& acquired) {
        int err = 0;
        mseconds_t timeout = 0;
        bool untimed = this->infinite_timeout(timeout);

        for (unsigned tries = 1, tried = 0; tried < tries; ++tried) {

            this->outlln(__LOCATION__, "try {...", NULL);
            try {
                if ((untimed)) {
                    this->outlln(__LOCATION__, "acquire acquire(acquired)...", NULL);
                    acquire acquire(acquired);
                    this->outlln(__LOCATION__, "...acquire acquire(acquired)", NULL);
                } else {
                    if ((0 < timeout)) {
                        this->outlln(__LOCATION__, "timed_acquire acquire(acquired timeout = ", unsigned_to_string(timeout).chars(), ")...", NULL);
                        timed_acquire acquire(acquired, timeout);
                        this->outlln(__LOCATION__, "...timed_acquire acquire(acquired timeout = ", unsigned_to_string(timeout).chars(), ")", NULL);
                    } else {
                        this->outlln(__LOCATION__, "try_acquire acquire(acquired,)...", NULL);
                        try_acquire acquire(acquired);
                        this->outlln(__LOCATION__, "...try_acquire acquire(acquired)", NULL);
                    }
                }
                err = 0;
                this->outlln(__LOCATION__, "...} try", NULL);
            } catch (const exception& e) {
                this->outlln(__LOCATION__, "...catch (const exception& e.status = \"", e.status_to_chars(), "\")", NULL);
                err = 1;
            } catch (...) {
                this->outlln(__LOCATION__, "...catch (...)", NULL);
                err = 1;
            }
        }
        return err;
    }

    /// run
    template <class TSemaphore>
    int run() {
        int err = 0;
        mseconds_t timeout = 0;
        bool untimed = this->infinite_timeout(timeout);

        this->outlln(__LOCATION__, "try {...", NULL);
        try {
            TSemaphore acquired;

            if ((untimed)) {
                ::vos::release release(acquired);
                run(acquired);
            } else {
                run(acquired);
            }
            this->outlln(__LOCATION__, "...} try", NULL);
        } catch (const exception& e) {
            this->outlln(__LOCATION__, "...catch (const exception& e.status = \"", e.status_to_chars(), "\")", NULL);
            err = 1;
        } catch (...) {
            this->outlln(__LOCATION__, "...catch (...)", NULL);
            err = 1;
        }
        return err;
    }
}; /// class maint
typedef maint<> main;

namespace os {
/// class maint
template 
<class TExtends = semaphore::maint<semaphore::os::main_opt>, 
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
}; /// class maint
typedef maint<> main;
} /// namespace os

} /// namespace semaphore
} /// namespace mt
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_MT_SEMAPHORE_MAIN_HPP
