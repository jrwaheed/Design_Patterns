#pragma once

#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include <iostream>
#include <list>
#include <iterator>
#include "../src/Displays.cpp"
class WeatherData
{
private:
    list<Displays *> displays;
    float temperature;
    float humidity;
    float pressure;

public:
    WeatherData(float temperature, float humidity, float pressure, std::list<Displays *> displays);
    void notifyObservers();
    void printData();
    void measurementsChanged();
};

#endif