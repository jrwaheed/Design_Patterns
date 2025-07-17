// THIS IS THE ABSTRACT CLASS THAT WILL USED AS THE OBSERVER
#pragma once

#include <iostream>
#include <memory>
#include <string>
#include <list>
#include <algorithm>
#include <iterator>
#include <vector>
#include <map>

using namespace std;

class Displays
{
private:
    float temperature;
    float humidity;
    float pressure;

public:
    virtual void updateDisplay(float temperature, float humidity, float pressure) = 0;
    virtual void displayInfo() = 0;
};
