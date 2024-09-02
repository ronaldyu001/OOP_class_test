/*********************************************************
* Summary: This file includes the definition for the car class (implemented
* in car.cpp).
*
* [More high-level program descriptions come here ]
*
* Author: Ronald Yu
* Created: 9/1/2024
* Summary of Modifications [if applicable]:
* 9/1/2024 - 
*
********************************************************/

#ifndef CAR_H
#define CAR_H


// include statements
#include<iostream>


/* *******************************************************
* CLASS NAME: 
* car
* 
* DESCRIPTION: 
* Class to input and output details about a car.
*
* NOTES:
* - Requires make, model, year, color, and price to be entered
*   to intialize object of this class.
* *******************************************************/

class car{

    public:
        // variables
        std::string make;
        std::string model;
        std::string year;
        std::string color;
        std::string price;


        // declare default constructor
        car();


        // getters and setters
        // make
        std::string getmake();
        void setmake(std::string make);
        
        // model
        std::string getmodel();
        void setmodel(std::string model);

        // year
        std::string getyear();
        void setyear(std::string year);

        // color
        std::string getcolor();
        void setcolor(std::string color);

        //price
        std::string getprice();
        void setprice(std::string price);


};



#endif 