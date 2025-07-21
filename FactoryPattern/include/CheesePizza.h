#pragma once

#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include <iostream>
#include "Pizza.h"

using namespace std;

class CheesePizza : public Pizza
{

public:
    CheesePizza();
    void pizzaUpdate();
};

#endif