#pragma once

#include <dimension.hpp>

namespace ulib
{
    template <dimension D, double C>
    struct unit
    {
        static constexpr double from_base = C;
        static constexpr double to_base = 1.0 / C;

        double value;

        template <double C_other>
        constexpr auto operator +=(const unit<D, C_other> other) noexcept -> unit&
        {
            if constexpr (C == C_other)
            {
                value += other.value;
            }
            else if constexpr (C == 1.0)
            {
                value += other.value * other.to_base;
            }
            else if constexpr (C_other == 1.0)
            {
                value += other.value * from_base;
            }
            else
            {
                value += other.value * other.to_base * from_base;
            }
        };
    };
};