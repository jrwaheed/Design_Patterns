#include "../include/PizzaFactory.h"

#include <iostream>

using namespace std;

PizzaFactory::PizzaFactory() {};

// THIS IS THE FACTORY METHOD. THE CREATION OF THE PIZZA IS CONFINED
// (ENCAPSULATED)TO THIS CLASS. WITHIN THIS CLASS, THE ABSTRACT CLASS PIZZA IS USED

Pizza *PizzaFactory::createPizza(PizzaTypes type)
{

    Pizza *pizza;
    if (type == PizzaTypes::CHEESE)
    {
        pizza = new CheesePizza();
    }

    else if (type == PizzaTypes::JALAPENO)
    {
        pizza = new JalapenoPizza();
    }

    else if (type == PizzaTypes::PEPPERONI)
    {
        pizza = new PepperoniPizza();
    }
    else if (type == PizzaTypes::VEGGIE)
    {
        pizza = new VeggiePizza();
    };
    pizza->pizzaUpdate();
    return pizza;
};