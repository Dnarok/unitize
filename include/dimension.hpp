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

        constexpr friend auto operator *(const dimension& left, const dimension& right) noexcept -> dimension
        {
            dimension out = left;

            out.L += right.L;
            out.M += right.M;
            out.T += right.T;
            out.I += right.I;
            out.θ += right.θ;
            out.N += right.N;
            out.J += right.J;

            return out;
        };
        constexpr friend auto operator /(const dimension& left, const dimension& right) noexcept -> dimension
        {
            dimension out = left;

            out.L -= right.L;
            out.M -= right.M;
            out.T -= right.T;
            out.I -= right.I;
            out.θ -= right.θ;
            out.N -= right.N;
            out.J -= right.J;

            return out;
        };
        constexpr auto operator -() const noexcept -> dimension
        {
            return dimension
            {
                -L,
                -M,
                -T,
                -I,
                -θ,
                -N,
                -J
            };
        };
        constexpr friend auto operator ==(const dimension& left, const dimension& right) noexcept -> bool = default;
    };
};