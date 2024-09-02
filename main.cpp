/*********************************************************
* Summary: This file includes the orchestration for the car class (defined
* in car.h).
*
* [More high-level program descriptions come here ]
*
* Author: Ronald Yu
* Created: 9/1/2024
* Summary of Modifications [if applicable]:
* 9/1/2024 - 
*
********************************************************/

// include statements
#include<iostream>
#include"car.h"


// main
int main(){

    // create object
    car ronaldCar;


    // output properties of object ronaldCar
    std::cout << "ronaldCar make: " << ronaldCar.make << std::endl;
    std::cout << "ronaldCar model: " << ronaldCar.model << std::endl;
    std::cout << "ronaldCar year: " << ronaldCar.year << std::endl;
    std::cout << "ronaldCar color: " << ronaldCar.color << std::endl;
    std::cout << "ronaldCar price: " << ronaldCar.price << std::endl;


    return 0;
}