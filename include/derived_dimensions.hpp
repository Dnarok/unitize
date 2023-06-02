#pragma once

#include <dimension.hpp>

namespace ulib
{
    // base quantities
    constexpr dimension length                  = dimension{ 1, 0, 0, 0, 0, 0, 0 };
    constexpr dimension mass                    = dimension{ 0, 1, 0, 0, 0, 0, 0 };
    constexpr dimension time                    = dimension{ 0, 0, 1, 0, 0, 0, 0 };
    constexpr dimension electric_current        = dimension{ 0, 0, 0, 1, 0, 0, 0 };
    constexpr dimension temperature             = dimension{ 0, 0, 0, 0, 1, 0, 0 };
    constexpr dimension amount_of_substance     = dimension{ 0, 0, 0, 0, 0, 1, 0 };
    constexpr dimension luminous_intensity      = dimension{ 0, 0, 0, 0, 0, 0, 1 };

    constexpr dimension absement                = length * time;
    constexpr dimension force                   = length * mass / (time * time);
    constexpr dimension energy                  = force * length;
    constexpr dimension absorbed_dose           = energy / mass;
    constexpr dimension absorbed_dose_rate      = absorbed_dose / time;
    constexpr dimension velocity                = length / time;
    constexpr dimension acceleration            = velocity / time;
    constexpr dimension jerk                    = acceleration / time;
    constexpr dimension snap                    = jerk / time;
    constexpr dimension crackle                 = snap / time;
    constexpr dimension pop                     = crackle / time;
    constexpr dimension momentum                = mass * velocity;
    constexpr dimension action                  = momentum * length;
    constexpr dimension plane_angle             = length / length;
    constexpr dimension angular_velocity        = plane_angle / time;
    constexpr dimension angular_acceleration    = angular_velocity / time;
    constexpr dimension area                    = length * length;
    constexpr dimension moment_of_inertia       = mass * area;
    constexpr dimension angular_momentum        = moment_of_inertia * angular_velocity;
    constexpr dimension area_density            = mass / area;
    constexpr dimension electric_charge         = electric_current * time;
    constexpr dimension electric_potential      = energy / electric_charge;
    constexpr dimension capacitance             = electric_charge / electric_potential;
    constexpr dimension volume                  = area * length;
    constexpr dimension reaction_rate           = amount_of_substance / (volume * time);
};