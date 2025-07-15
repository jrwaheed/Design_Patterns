cmake_minimum_required(VERSION 3.28.3)
project(patterns)

add_library(observe 
    ObserverPattern/src/WeatherData.cpp 
    ObserverPattern/include/WeatherData.h)

add_executable(patternprogram 
    main.cpp 
)

target_link_libraries(patternprogram observe)

