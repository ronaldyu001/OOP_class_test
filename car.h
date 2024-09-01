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
*   not intialize object of this class.
* *******************************************************/

class car{

    public:
        // variables
        std::string make;
        std::string model;
        std::string year;
        std::string color;
        std::string price;


        // constructor
        car(std::string make, std::string model, std::string year, std::string color, std::string price){}


        // getters and setters
        // make
        std::string getmake();
        std::string setmake(std::string);
        
        // model
        std::string getmodel();
        std::string setmodel(std::string);

        // year
        std::string getyear();
        std::string setyear(std::string);

        // color
        std::string color();
        std::string color(std::string);

        //price
        std::string getprice();
        std::string setprice(std::string);


};



#endif 