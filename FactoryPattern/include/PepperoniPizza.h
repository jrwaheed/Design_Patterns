#pragma once

#ifndef PEPPERONPIZZA_H
#define PEPPERONPIZZA_H

#include <iostream>
#include "Pizza.h"

using namespace std;

class PepperoniPizza : public Pizza
{

public:
    PepperoniPizza();
    void pizzaUpdate();
};

#endif