#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include "../include/WeatherData.h"
#include "../include/StatisticsDisplay.h"
#include "../include/CurrentConditionDisplay.h"
#include "../include/ForecastDisplay.h"

// class WeatherData

float temperature;
float humidity;
float pressure;
// std::list<Observer *> observers;

// void registerObserver(Observer *o);
// void removeObserver(Observer *o);

WeatherData::WeatherData(float utemperature, float uhumidity, float upressure)
{
    temperature = utemperature;
    humidity = uhumidity;
    pressure = upressure;
}

// BELOW IS THE SECTION THAT IS INCORRECT AND NEEDS IMPROVEMENT.
// WITH THE IMPLEMENTATION BELOW WE WOULD ALWAYS NEED TO THE AMEND THE CODE EACH TIME A NEW DISPLAY IS ADDED
// HERE THE OBSERVE PATTERN CAN BE IMPLEMENTED
void WeatherData::notifyObservers()
{
    StatisticsDisplay statisticsDisplay;
    statisticsDisplay.updateDisplay(25, 10, 23);
    statisticsDisplay.displayInfo();

    CurrentConditionDisplay currentConditionDisplay;
    currentConditionDisplay.updateDisplay(25, 10, 23);
    currentConditionDisplay.displayInfo();

    ForecastDisplay forecastDisplay;
    forecastDisplay.updateDisplay(25, 10, 23);
    forecastDisplay.displayInfo();
};
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
