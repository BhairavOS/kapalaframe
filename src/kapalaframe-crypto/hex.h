#pragma once

#include <kapalaframe-io/traits.h>

namespace Kapalaframe::Crypto {

Res<usize> hexEncode(Bytes bytes, Io::TextWriter &out);

Res<String> hexEncode(Bytes bytes);

} // namespace Kapalaframe::Crypto
