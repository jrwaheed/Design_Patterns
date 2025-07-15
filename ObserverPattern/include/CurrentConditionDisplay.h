#ifndef CURRENTCONDITIONDISPLAY_H
#define CURRENTCONDITIONDISPLAY_H

#include <iostream>

class CurrentConditionDisplay
{

private:
    float temperature;
    float humidity;
    float pressure;

public:
    CurrentConditionDisplay();
    void updateDisplay(float temperature, float humidity, float pressure);
    void displayInfo();
};

#endif