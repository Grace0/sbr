#ifndef _DRIVE_H_
#define _DRIVE_H_

#include <AccelStepper.h>

const int MOTOR_INTERFACE_TYPE = 1; //external stepper driver with Step and Direction pins
const int LDIR_PIN = 6;
const int LSTEP_PIN = 7;
const int RDIR_PIN = 4;
const int RSTEP_PIN = 5;


class Drive {

  public:

    Drive();

    void runPID(float now_time);
    void setMotors(float output);

    float getAngle();
    void setAngle(float imu_ang);

    void setInitAngle(float _init_ang);


  private:

    float _now_time;
    float init_ang;

    const float MAX_SPEED = 1000; //Speeds of more than 1000 steps per second are unreliable
    const float MAX_ACCEL = 0;

    const float Kp = 0;
    const float Ki = 0;
    const float Kd = 0;
//    const float Kf = 0;

    float target_ang = 0;
    float now_ang = 0;
    float now_error = 0;
    float last_error = 0;

    float elapsed_time, previous_time;

    float P = 0;
    float I = 0;
    float D = 0;
//    float F = 0;

    float error = 0;
    float error_integral = 0;
    float error_derivative = 0;

    float output = 0;
};

#endif
