//Car.h
#ifndef CAR_H
#define CAR_H

#include <string>
    using std::string;

#include "Engine.h"

class Car
{

public:
    // the interface for the car class
    // default constructor
    Car();
    // overloaded constructors
    explicit Car(string color, string type);
    explicit Car(string color, string type, int doors);
    //destructor
    ~Car();

    //setters
    void setColor(string color);
    void setType(string type);
    void setType(string type, int doors); //overloaded function example
    void setDoors(int doors);
    void setModel(string);
    void setEngine(string);

    //getters
    string getColor() const;
    string getType() const;
    int getDoors() const;

    string toString();

private:
   string color;
   string type; //Sedan, SUV
   int doors;
   Engine* enginePtr; // pointer 
   int ID = 0;

};
#endif

