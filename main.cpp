#include <iostream>
#include "ObserverPattern/include/WeatherData.h"

using namespace std;

int main()
{
    std::cout << "Hello, Observer Pattern!" << std::endl;

    WeatherData weatherData(25, 10, 23);
    weatherData.notifyObservers();

    return 0;
}
