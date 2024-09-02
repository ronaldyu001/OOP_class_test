/*********************************************************
* Summary: This file includes the implementation for the car class (defined
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


// implementation of car class getters/setters
// getmake
std::string car::getmake(){

    return make;
}

// setmake
void car::setmake(std::string carMake){

    make = carMake;
}

// getmodel
std::string car::getmodel(){

    return model;
}

// setmodel
void car::setmodel(std::string carModel){

    model = carModel;
}

// getyear
std::string car::getyear(){

    return year;
}

// setyear
void car::setyear(std::string carYear){

    year = carYear;
}

// getcolor
std::string car::getcolor(){

    return color;
}

// setcolor
void car::setcolor(std::string carColor){

    color = carColor;
}


// getprice
std::string car::getprice(){

    return price;
}

// setprice
void car::setprice(std::string carPrice){

    price = carPrice;
}

// constructor
car::car()
: make("Audi"), model("A5"), year("2021"), color("grey"), price("$40,000"){}