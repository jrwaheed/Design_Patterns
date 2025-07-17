#pragma once

#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include <iostream>
#include "../src/Displays.cpp"

class ForecastDisplay : public Displays
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