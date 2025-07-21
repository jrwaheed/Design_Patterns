#pragma once

#ifndef PIZZAFACTORY_H
#define PIZZAFACTORY_H
#include "../src/PizzaTypes.cpp"
#include "../include/Pizza.h"
#include "../include/PepperoniPizza.h"
#include "../include/CheesePizza.h"
#include "../include/JalapenoPizza.h"
#include "../include/VeggiePizza.h"

#include <iostream>

using namespace std;

class PizzaFactory
{

public:
    PizzaFactory();
    Pizza *createPizza(PizzaTypes type);
};

#endif