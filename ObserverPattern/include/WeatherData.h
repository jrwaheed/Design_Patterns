#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include <iostream>

class WeatherData
{

public:
    WeatherData(float temperature, float humidity, float pressure);
    void notifyObservers();
    void printData();
    void measurementsChanged();

    // private:
    //     float temperature;
    //     float humidity;
    //     float pressure;
};

#endif