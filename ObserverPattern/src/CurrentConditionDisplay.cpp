#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include "../include/CurrentConditionDisplay.h"

CurrentConditionDisplay::CurrentConditionDisplay() {}

void CurrentConditionDisplay::updateDisplay(float utemperature, float uhumidity, float upressure)
{
    std::cout << "Updating CurrentConditionDisplay" << std::endl;
    temperature = utemperature;
    humidity = uhumidity;
    pressure = upressure;
};

void CurrentConditionDisplay::displayInfo()
{
    std::cout << "CurrentConditionDisplay info:" << std::endl;
    std::cout << "Temperature: " << temperature << std::endl;
    std::cout << "Humidity: " << humidity << std::endl;
    std::cout << "Pressure: " << pressure << std::endl;
}
