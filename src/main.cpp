#include "main.h"


//DEFINING VARIABLES:

//controllers
pros::Controller mainController(pros::E_CONTROLLER_MASTER);
pros::Controller partnerController(pros::E_CONTROLLER_PARTNER);

//drive motors --> REMEMBER TO CHANGE PORTS
pros::Motor FrontRightDrive(1, pros:: E_MOTOR_GEARSET_18, false, pros:: E_MOTOR_ENCODER_DEGREES);
pros::Motor BackRightDrive(2, pros:: E_MOTOR_GEARSET_18, false, pros:: E_MOTOR_ENCODER_DEGREES);
pros::Motor FrontLeftDrive(3, pros:: E_MOTOR_GEARSET_18, true, pros:: E_MOTOR_ENCODER_DEGREES);
pros::Motor BackLeftDrive(4, pros:: E_MOTOR_GEARSET_18, true, pros:: E_MOTOR_ENCODER_DEGREES);


//can set brake mode if needed
void initialize() {}


void disabled() {}


void competition_initialize() {}

// :)
void autonomous() {}


//DRIVER CONTROL
void opcontrol() {

    while(true){
        double leftY = mainController.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
        double rightY = mainController.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
        std::vector<double> driveL{0,0};
        std::vector<double> driveR{0,0};

        //drive
        int forward =( mainController.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y) * 127)/100;
        int turn = (mainController.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X) * 127)/100;

        FrontRightDrive.move_velocity(forward + turn);
        BackRightDrive.move_velocity(forward + turn);
        FrontLeftDrive.move_velocity(forward - turn);
        BackLeftDrive.move_velocity(forward - turn);
    }
}