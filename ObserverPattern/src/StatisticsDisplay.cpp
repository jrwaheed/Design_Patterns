#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include "../include/StatisticsDisplay.h"

StatisticsDisplay::StatisticsDisplay() {}

void StatisticsDisplay::updateDisplay(float utemperature, float uhumidity, float upressure)
{
    std::cout << "Updating StatisticsDisplay" << std::endl;
    temperature = utemperature;
    humidity = uhumidity;
    pressure = upressure;
};

void StatisticsDisplay::displayInfo()
{
    std::cout << "StatisticsDisplay info:" << std::endl;
    std::cout << "Temperature: " << temperature << std::endl;
    std::cout << "Humidity: " << humidity << std::endl;
    std::cout << "Pressure: " << pressure << std::endl;
}
