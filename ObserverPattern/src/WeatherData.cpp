#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include "../include/WeatherData.h"
#include "../include/StatisticsDisplay.h"
#include "../include/CurrentConditionDisplay.h"
#include "../include/ForecastDisplay.h"
#include "../src/Displays.cpp"

list<Displays *> displays;
float temperature;
float humidity;
float pressure;

WeatherData::WeatherData(float utemperature, float uhumidity, float upressure, std::list<Displays *> udisplays)
{
    temperature = utemperature;
    humidity = uhumidity;
    pressure = upressure;
    displays = udisplays;
}

// BELOW IS THE SECTION THAT IS INCORRECT AND NEEDS IMPROVEMENT.
// WITH THE IMPLEMENTATION BELOW WE WOULD ALWAYS NEED TO THE AMEND THE CODE EACH TIME A NEW DISPLAY IS ADDED
// HERE THE OBSERVE PATTERN CAN BE IMPLEMENTED
// void WeatherData::notifyObservers()
// {
//     StatisticsDisplay statisticsDisplay;
//     statisticsDisplay.updateDisplay(25, 10, 23);
//     statisticsDisplay.displayInfo();

//     CurrentConditionDisplay currentConditionDisplay;
//     currentConditionDisplay.updateDisplay(25, 10, 23);
//     currentConditionDisplay.displayInfo();

//     ForecastDisplay forecastDisplay;
//     forecastDisplay.updateDisplay(25, 10, 23);
//     forecastDisplay.displayInfo();
// };

// BELOW IS THE BETTER ALTERNATIVE. THE OBSERVE PATTERN IS IMPLEMENTED.
// THE LIST IS A LIST OF DISPLAYS WHICH POINTS TO A DIFFERENT DISPLAY (OBSERVER)
// THIS LOOP WILL ITERATE OVER THE LIST OF DISPLAYS AND CALL THE UPDATE AND DISPLAY METHODS OF EACH DISPLAY

void WeatherData::notifyObservers()
{
    for (auto display : displays)
    {
        display->updateDisplay(temperature, humidity, pressure);
        display->displayInfo();
    };
}

void WeatherData::printData()
{
    std::cout << "WeatherData detailed info:" << std::endl;
    std::cout << "Temperature: " << temperature << std::endl;
    std::cout << "Humidity: " << humidity << std::endl;
    std::cout << "Pressure: " << pressure << std::endl;
};

void WeatherData::measurementsChanged()
{
    std::cout << "WeatherData updateDisplays" << std::endl;
};
