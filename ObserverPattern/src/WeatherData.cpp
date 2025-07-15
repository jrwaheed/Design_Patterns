#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include "../include/WeatherData.h"

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

void WeatherData::notifyObservers()
{
    std::cout << "WeatherData notifyObservers" << std::endl;
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
