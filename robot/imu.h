#ifndef _IMU_H_
#define _IMU_H_

#include "I2Cdev.h"
#include "Wire.h"
#include <Arduino.h>

#define INTERRUPT_PIN 2

class IMU {

   public:

    IMU();
    void initIMU();
    static void dmpDataReady(); //ISR
    float getPitch();


  private:

};

#endif
