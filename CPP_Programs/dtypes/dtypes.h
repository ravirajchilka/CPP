#pragma once

#ifndef MYLIBRARY_H_
#define MYLIBRARY_H_

namespace dtypes {

    using ubyte = std::uint8_t;
    using uword = std::uint16_t;
    using udword = std::uint32_t;
    using uqword = std::uint64_t;

    auto ctob(ubyte value) {
    return static_cast<int>(value);
};
}

#endif

