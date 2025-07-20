cmake_minimum_required(VERSION 3.28.3)
project(patterns)

add_library(observe 
    ObserverPattern/src/Displays.cpp
    ObserverPattern/src/WeatherData.cpp 
    ObserverPattern/include/WeatherData.h
    ObserverPattern/src/StatisticsDisplay.cpp 
    ObserverPattern/include/StatisticsDisplay.h
    ObserverPattern/src/CurrentConditionDisplay.cpp 
    ObserverPattern/include/CurrentConditionDisplay.h
    ObserverPattern/src/ForecastDisplay.cpp 
    ObserverPattern/include/ForecastDisplay.h
    )

add_library(factory
    FactoryPattern/src/Restaurant.cpp
    FactoryPattern/include/Restaurant.h
    FactoryPattern/src/CheesePizza.cpp
    FactoryPattern/include/CheesePizza.h
    FactoryPattern/src/JalapenoPizza.cpp
    FactoryPattern/include/JalapenoPizza.h
    FactoryPattern/src/VeggiePizza.cpp
    FactoryPattern/include/VeggiePizza.h
    FactoryPattern/src/PepperoniPizza.cpp
    FactoryPattern/include/PepperoniPizza.h
    )

add_library(singleton
    SingletonPattern/Printer.cpp
    )

add_executable(patternprogram 
    main.cpp 
)

target_link_libraries(patternprogram observe)
target_link_libraries(patternprogram factory)
target_link_libraries(patternprogram singleton)
