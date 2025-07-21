#include <iostream>
#include "ObserverPattern/include/WeatherData.h"
#include "ObserverPattern/include/StatisticsDisplay.h"
#include "ObserverPattern/include/CurrentConditionDisplay.h"
#include "ObserverPattern/include/ForecastDisplay.h"

#include "FactoryPattern/include/Restaurant.h"
#include "FactoryPattern/include/CheesePizza.h"
#include "FactoryPattern/include/JalapenoPizza.h"
#include "FactoryPattern/include/VeggiePizza.h"
#include "FactoryPattern/include/PepperoniPizza.h"
#include "FactoryPattern/src/PizzaTypes.cpp"

#include "SingletonPattern/Printer.cpp"

using namespace std;

int main()
{
    // OBSERVER_PATTERN
    // std::cout << "Hello, Observer Pattern!" << std::endl;

    // StatisticsDisplay *staticDis = new StatisticsDisplay();
    // CurrentConditionDisplay *currentDis = new CurrentConditionDisplay();
    // ForecastDisplay *forecastDis = new ForecastDisplay();

    // std::list<Displays *> displaysList = {staticDis, currentDis, forecastDis};

    // WeatherData weatherData(25, 10, 23, displaysList);
    // weatherData.notifyObservers();

    // FACTORY PATTERN
    Restaurant giordanos;
    giordanos.orderPizza(PizzaTypes::VEGGIE);

    // SINGLETON PATTERN

    // Printer *printer = Printer::getInstance();
    // printer->confirmPrinterIsRunning();

    return 0;
}
