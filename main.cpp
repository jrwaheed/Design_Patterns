#include <iostream>
#include "ObserverPattern/include/WeatherData.h"
#include "ObserverPattern/include/StatisticsDisplay.h"
#include "ObserverPattern/include/CurrentConditionDisplay.h"
#include "ObserverPattern/include/ForecastDisplay.h"

using namespace std;

int main()
{
    std::cout << "Hello, Observer Pattern!" << std::endl;

    StatisticsDisplay *staticDis = new StatisticsDisplay();
    CurrentConditionDisplay *currentDis = new CurrentConditionDisplay();
    ForecastDisplay *forecastDis = new ForecastDisplay();

    std::list<Displays *> displaysList = {staticDis, currentDis, forecastDis};

    WeatherData weatherData(25, 10, 23, displaysList);
    weatherData.notifyObservers();

    return 0;
}
