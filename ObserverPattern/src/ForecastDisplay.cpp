#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include "../include/ForecastDisplay.h"

ForecastDisplay::ForecastDisplay() {}

void ForecastDisplay::updateDisplay(float utemperature, float uhumidity, float upressure)
{
    std::cout << "Updating ForecastDisplay" << std::endl;
    temperature = utemperature;
    humidity = uhumidity;
    pressure = upressure;
};

void ForecastDisplay::displayInfo()
{
    std::cout << "ForecastDisplay info:" << std::endl;
    std::cout << "Temperature: " << temperature << std::endl;
    std::cout << "Humidity: " << humidity << std::endl;
    std::cout << "Pressure: " << pressure << std::endl;
}
