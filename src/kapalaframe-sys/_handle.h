#pragma once

#include <kapalaframe-base/distinct.h>

namspace Kapalaframe::Sys{

 using Handle = Distinct<usize, struct _HandleTag>;

 static consttexpr Handle INVALID = Handle(-1);


} //namespace Kapalaframe::Sys