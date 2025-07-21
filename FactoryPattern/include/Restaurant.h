#pragma once

#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
#include "Pizza.h"
#include "PizzaFactory.h"
#include "../src/PizzaTypes.cpp"
#include "Pizza.h"

using namespace std;

class Restaurant
{

public:
    Restaurant();
    Pizza *orderPizza(PizzaTypes pizzaType);
};
#endif