
#pragma once
#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include <iostream>
#include "../src/Displays.cpp"

class StatisticsDisplay : public Displays
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