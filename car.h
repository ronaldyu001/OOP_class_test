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
        car(std::string make, std::string model, std::string year, std::string color, std::string price){
            make = "Audi";
            model = "A5";
            year = "2021";
            color = "grey";
            price = "$40,000";
        }


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
        std::string color();
        void color(std::string color);

        //price
        std::string getprice();
        void setprice(std::string price);


};



#endif 