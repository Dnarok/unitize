#pragma once

#include <dimension.hpp>

namespace ulib
{
    // base quantities
    constexpr dimension length              = dimension{ 1, 0, 0, 0, 0, 0, 0 };
    constexpr dimension mass                = dimension{ 0, 1, 0, 0, 0, 0, 0 };
    constexpr dimension time                = dimension{ 0, 0, 1, 0, 0, 0, 0 };
    constexpr dimension electric_current    = dimension{ 0, 0, 0, 1, 0, 0, 0 };
    constexpr dimension temperature         = dimension{ 0, 0, 0, 0, 1, 0, 0 };
    constexpr dimension amount_of_substance = dimension{ 0, 0, 0, 0, 0, 1, 0 };
    constexpr dimension luminous_intensity  = dimension{ 0, 0, 0, 0, 0, 0, 1 };

    constexpr dimension mach                                = dimension{ 0, 0, 0, 0, 0, 0, 0 };
    constexpr dimension frequency                           = -time;
    constexpr dimension absement                            = length * time;
    constexpr dimension linear_density                      = mass / length;
    constexpr dimension focal_length                        = length;
    constexpr dimension optical_power                       = -focal_length;
    constexpr dimension radioactivity                       = frequency;

    constexpr dimension area                                = length * length;
    constexpr dimension volume                              = area * length;
    constexpr dimension volumetric_flow_rate                = volume / time;
    constexpr dimension area_density                        = mass / area;
    constexpr dimension moment_of_inertia                   = mass * area;
    constexpr dimension mass_density                        = mass / volume;

    constexpr dimension force                               = length * mass / (time * time);
    constexpr dimension energy                              = force * length;
    constexpr dimension energy_density                      = energy / volume;
    constexpr dimension impulse                             = force * time;
    constexpr dimension power                               = energy / time;
    
    constexpr dimension pressure                            = force / area;
    constexpr dimension stress                              = pressure;
    constexpr dimension viscosity                           = pressure * time;
    
    constexpr dimension velocity                            = length / time;
    constexpr dimension acceleration                        = velocity / time;
    constexpr dimension jerk                                = acceleration / time;
    constexpr dimension snap                                = jerk / time;
    constexpr dimension crackle                             = snap / time;
    constexpr dimension pop                                 = crackle / time;
    constexpr dimension momentum                            = mass * velocity;
    constexpr dimension action                              = momentum * length;
    
    constexpr dimension plane_angle                         = length / length;
    constexpr dimension solid_angle                         = area / area;
    constexpr dimension angular_velocity                    = plane_angle / time;
    constexpr dimension angular_acceleration                = angular_velocity / time;
    constexpr dimension angular_momentum                    = moment_of_inertia * angular_velocity;
    constexpr dimension centrifugal_force                   = force * plane_angle;
    constexpr dimension torque                              = force * length;
    
    constexpr dimension reaction_rate                       = amount_of_substance / (volume * time);
    constexpr dimension catalytic_activity                  = amount_of_substance / time;
    constexpr dimension catalytic_activity_concentration    = catalytic_activity / volume;
    constexpr dimension chemical_potential                  = energy / amount_of_substance;
    
    constexpr dimension half_life                           = time;
    constexpr dimension equivalent_dose                     = energy / mass;
    constexpr dimension absorbed_dose                       = energy / mass;
    constexpr dimension absorbed_dose_rate                  = absorbed_dose / time;
    
    constexpr dimension current_density                     = electric_charge / time / area;
    constexpr dimension electric_charge                     = electric_current * time;
    constexpr dimension electric_potential                  = energy / electric_charge;
    constexpr dimension electric_capacitance                = electric_charge / electric_potential;
    constexpr dimension electric_charge_density             = electric_charge / volume;
    constexpr dimension electric_dipole_moment              = electric_charge * length;
    constexpr dimension electric_induction                  = electric_charge / area;
    constexpr dimension electric_resistance                 = electric_potential / electric_current;
    constexpr dimension electric_conductance                = electric_current / electric_potential;
    constexpr dimension electric_resistivity                = electric_resistance * length;
    constexpr dimension electric_conductivity               = electric_conductance * length;
    constexpr dimension electric_impedance                  = electric_resistance;
    
    constexpr dimension thermal_energy                      = energy;
    constexpr dimension thermal_power                       = thermal_energy / time;
    constexpr dimension thermal_capacity                    = thermal_energy / temperature;
    constexpr dimension thermal_flux                        = thermal_power / area;
    constexpr dimension thermal_resistance                  = temperature / thermal_power;
    constexpr dimension thermal_conductance                 = thermal_power / temperature;
    constexpr dimension thermal_resistivity                 = thermal_resistance * length;
    constexpr dimension thermal_conductivity                = thermal_conductance / length;
    constexpr dimension entropy                             = energy / temperature;

    constexpr dimension luminous_flux                       = luminous_intensity * solid_angle;
    constexpr dimension illuminance                         = luminous_flux / area;
    constexpr dimension luminance                           = luminous_intensity / area;

    constexpr dimension radiant_energy                      = energy;
    constexpr dimension radiant_flux                        = radiant_energy / time;
    constexpr dimension radiant_intensity                   = radiant_flux / solid_angle;
    constexpr dimension irradiance                          = radiant_flux / area;
    constexpr dimension intensity                           = radiant_flux / area;
    constexpr dimension radiance                            = radiant_intensity / area;
    
    constexpr dimension magnetic_field_strength             = electric_current / length;
    constexpr dimension magnetic_flux                       = electric_potential * time;
    constexpr dimension magnetic_flux_density               = magnetic_flux / area;
    constexpr dimension magnetic_dipole_moment              = energy / magnetic_flux_density;
    constexpr dimension magnetization                       = magnetic_dipole_moment / volume;
    constexpr dimension inductance                          = electric_potential / (electric_current / time);
    constexpr dimension reluctance                          = -inductance;
    constexpr dimension permeability                        = inductance / length;
    constexpr dimension permittivity                        = electric_capacitance / length;

    constexpr dimension molar_concentration                 = amount_of_substance / volume;
    constexpr dimension molar_energy                        = energy / amount_of_substance;
    constexpr dimension molar_entropy                       = entropy / amount_of_substance;
    constexpr dimension molar_thermal_capacity              = thermal_capacity / amount_of_substance;
    
    constexpr dimension specific_energy                     = energy / mass;
    constexpr dimension specific_thermal_capacity           = thermal_capacity / mass;
    constexpr dimension specific_volume                     = volume / mass;
};