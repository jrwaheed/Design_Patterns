#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include <iostream>

class ForecastDisplay
{

private:
    float temperature;
    float humidity;
    float pressure;

public:
    ForecastDisplay();
    void updateDisplay(float temperature, float humidity, float pressure);
    void displayInfo();
};

#endif