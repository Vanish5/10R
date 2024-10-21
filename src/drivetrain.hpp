#ifndef DRIVETRAIN_HPP
#define DRIVETRAIN_HPP

#include "pros/motors.hpp"

class Drivetrain {
public:
    // Constructor
    Drivetrain(pros::MotorGroup* leftMotors, pros::MotorGroup* rightMotors);

    // Movement functions
    void moveForward(int velocity);
    void moveBackward(int velocity);
    void turnLeft(int velocity);
    void turnRight(int velocity);
    void stop();

private:
    pros::MotorGroup* left_motors;   // Left motor group
    pros::MotorGroup* right_motors;  // Right motor group
};

#endif // DRIVETRAIN_HPP