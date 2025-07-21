#pragma once

#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>

using namespace std;

class Pizza
{
public:
    Pizza() {};
    virtual void pizzaUpdate() = 0;
};

#endif