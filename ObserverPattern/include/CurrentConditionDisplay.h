#pragma once

#ifndef CURRENTCONDITIONDISPLAY_H
#define CURRENTCONDITIONDISPLAY_H

#include <iostream>
#include "../src/Displays.cpp"

class CurrentConditionDisplay : public Displays
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