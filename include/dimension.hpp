#pragma once

namespace ulib
{
    struct dimension
    {
        int L;
        int M;
        int T;
        int I;
        int θ;
        int N;
        int J;

        constexpr friend auto operator * (const dimension& left, const dimension& right) noexcept -> dimension;
        constexpr friend auto operator / (const dimension& left, const dimension& right) noexcept -> dimension;
        constexpr friend auto operator ==(const dimension& left, const dimension& right) noexcept -> bool;
    };
};