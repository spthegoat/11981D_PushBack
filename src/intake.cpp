# include "main.h"
# include "subsystems.hpp"

void intake(){
    front_intake.move(127);
    back_intake.move(0);
    top_intake.move(-127);
    piston1.set(true);
}

void outtake(){
    front_intake.move(127);
}

void stop(){
    front_intake.move(0);
    back_intake.move(0);
    top_intake.move(0);
}

void high_goal(){
    front_intake.move(127);
    back_intake.move(0);
    top_intake.move(127);
    piston1.set(false);

}
//What the sigma?//