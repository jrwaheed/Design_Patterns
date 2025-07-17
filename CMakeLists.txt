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

add_executable(patternprogram 
    main.cpp 
)

target_link_libraries(patternprogram observe)

