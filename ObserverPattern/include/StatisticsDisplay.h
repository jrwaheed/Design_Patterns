#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include <iostream>

class StatisticsDisplay
{

private:
    float temperature;
    float humidity;
    float pressure;

public:
    StatisticsDisplay();
    void updateDisplay(float temperature, float humidity, float pressure);
    void displayInfo();
};

#endif