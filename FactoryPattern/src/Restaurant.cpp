#include "../include/Restaurant.h"
#include "../include/CheesePizza.h"
#include "../include/JalapenoPizza.h"
#include "../include/VeggiePizza.h"
#include "../include/PepperoniPizza.h"
#include "PizzaTypes.cpp"
#include "../include/Pizza.h"
#include "../include/PizzaFactory.h"

#include <iostream>
#include <typeinfo>
#include "../include/Restaurant.h"

using namespace std;

Restaurant::Restaurant() {}

// HERE IS THE PROBLEM IN THE CODE.EACH TIME A NEW TYPE OF PIZZA IS
// ADDED TO THE MENU, THIS METHOD NEEDS TO BE AMENDED. THIS VIOLATES
// THE SECOND PRINCIPLE OF SOLID. IF WE IMPLEMENT A FACTORY HERE AND IMPLEMENT
// DEPENDENCY INVERSION, WE CAN SOLVE THIS PROBLEM.

// void Restaurant::makePizza(std::string pizzaType)
// {
//     std::cout << "making a pizza" << std::endl;
//     if (pizzaType == "pepperoni")
//     {
//         PepperoniPizza *pepperoniPizza = new PepperoniPizza();
//         pepperoniPizza->makePizza();
//     }

//     else if (pizzaType == "cheese")
//     {
//         CheesePizza *cheesePizza = new CheesePizza();
//         cheesePizza->makePizza();
//     }
//     else if (pizzaType == "jalapeno")
//     {
//         JalapenoPizza *jalapenoPizza = new JalapenoPizza();
//         jalapenoPizza->makePizza();
//     }
//     else if (pizzaType == "veggie")
//     {
//         VeggiePizza *veggiePizza = new VeggiePizza();
//         veggiePizza->makePizza();
//     }
// };

Pizza *Restaurant::orderPizza(PizzaTypes pizzaType)
{
    PizzaFactory pizzaFactory;
    Pizza *pizza = pizzaFactory.createPizza(pizzaType);

    return pizza;
};
