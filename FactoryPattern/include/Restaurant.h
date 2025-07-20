#pragma once

#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>

using namespace std;

class Restaurant
{

public:
    Restaurant();
    void makePizza(std::string pizzaType);
    void bake();
    void cut();
    void box();
};

#endif