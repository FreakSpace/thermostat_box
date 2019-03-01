//
// Created by navch on 01.03.2019.
//

#ifndef TS_CONFIGURATION_H
#define TS_CONFIGURATION_H


/************ THERMISTOR CONFIGURATION ************/
#define THERMISTOR_PIN A0

// COEFFICIENTS
#define B 3950 // B-coefficient
#define SERIAL_R 10000 // сопротивление последовательного резистора, 102 кОм
#define THERMISTOR_R 49900 // номинальное сопротивления термистора, 100 кОм
#define NOMINAL_T 18 // номинальная температура (при которой TR = 50 кОм)
#define COEF_THERMISTOR 269
/**************************************************/


/************ THERMISTOR CONFIGURATION ************/
#define COOLER_FAN_COLD_PIN 4
#define COOLER_FAN_HEAT_PIN 3
#define COOLER_PIN 6
#define HEATER_PIN 7

#define COOLING_INTERVAL 5000
/**************************************************/


#endif //TS_CONFIGURATION_H
