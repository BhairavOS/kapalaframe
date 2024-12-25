#include <kapalaframe-logger/logger.h>

#include "_embed.h"

#include "async.h"

Sched &globalSched(){
    return _Embed::globalSched();
}