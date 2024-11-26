#pragma once

#include <coroutine>
#include <compare>
#include <initializer_list>
#include <new>
#include <utility>
#include <memory>
#include <compare>
#include <stdint.h>
#include <stddef.h>

#ifdef __ck_sys_darwin__
#undef UNDERFLOW
#undef DOMAIN
#endif

#include <string.h>
#ifndef KAPALAFRAME_NO_TOP_LEVEL_USING

namespace Kapalaframe {

}

using namespace Kapalaframe;

#endif