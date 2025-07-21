#pragma once

#ifndef JALAPENOPIZZA_H
#define JALAPENOPIZZA_H

#include <iostream>
#include "Pizza.h"

using namespace std;

class JalapenoPizza : public Pizza
{

public:
    JalapenoPizza();
    void pizzaUpdate();
};

#endif