#pragma once

#ifndef VEGGIEPIZZA_H
#define VEGGIEPIZZA_H

#include <iostream>
#include "Pizza.h"

using namespace std;

class VeggiePizza : public Pizza
{

public:
    VeggiePizza();
    void pizzaUpdate();
};

#endif