#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

pros::Motor front_intake(1);
pros::Motor back_intake(2);
pros::Motor top_intake(3);

// inline pros::adi::DigitalIn limit_switch('A');