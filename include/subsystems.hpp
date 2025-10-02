#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor front_intake(21);
inline pros::Motor back_intake(20);
inline pros::Motor top_intake(12);

inline ez::Piston piston1('H');
// inline pros::adi::DigitalIn limit_switch('A');