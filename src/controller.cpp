#include "controller.hpp"

#include "main.h"


using namespace pros;

double B::Controller::getLeftX(){
    return (double) (get_analog(ANALOG_LEFT_X)) / 127;
}

double B::Controller::getLeftY(){
    return (double) (get_analog(ANALOG_LEFT_Y)) / 127;
}

double B::Controller::getRightX(){
    return (double) (get_analog(ANALOG_RIGHT_X)) / 127;
}

double B::Controller::getRightY(){
    return (double) (get_analog(ANALOG_RIGHT_Y)) / 127;
}

bool B::Controller::leftPressed() {
    return get_digital(E_CONTROLLER_DIGITAL_LEFT);
}

bool B::Controller::rightPressed() {
    return get_digital(E_CONTROLLER_DIGITAL_RIGHT);
}

bool B::Controller::upPressed() {
    return get_digital(E_CONTROLLER_DIGITAL_UP);
}

bool B::Controller::downPressed() {
    return get_digital(E_CONTROLLER_DIGITAL_DOWN);
}

bool B::Controller::aPressed() {
    return get_digital(E_CONTROLLER_DIGITAL_A);
}

bool B::Controller::bPressed() {
    return get_digital(E_CONTROLLER_DIGITAL_B);
}

bool B::Controller::xPressed() {
    return get_digital(E_CONTROLLER_DIGITAL_X);
}

bool B::Controller::yPressed() {
    return get_digital(E_CONTROLLER_DIGITAL_Y);
}

bool B::Controller::r1Pressed() {
    return get_digital(E_CONTROLLER_DIGITAL_R1);
}

bool B::Controller::r2Pressed() {
    return get_digital(E_CONTROLLER_DIGITAL_R2);
}

bool B::Controller::l1Pressed() {
    return get_digital(E_CONTROLLER_DIGITAL_L1);
}

bool B::Controller::l2Pressed() {
    return get_digital(E_CONTROLLER_DIGITAL_L2);
}
