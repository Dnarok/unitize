#include "dimension.hpp"

namespace ulib
{
    constexpr auto operator *(const dimension& left, const dimension& right) noexcept -> dimension
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
    
    constexpr auto operator /(const dimension& left, const dimension& right) noexcept -> dimension
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
    
    constexpr auto operator ==(const dimension& left, const dimension& right) noexcept -> bool
    {
        return 
            left.L == right.L &&
            left.M == right.M &&
            left.T == right.T &&
            left.I == right.I &&
            left.θ == right.θ &&
            left.N == right.N &&
            left.J == right.J;
    };
};