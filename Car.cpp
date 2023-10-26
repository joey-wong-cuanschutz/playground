//Car.cpp
#include <string>
    using std::string;

#include <iostream>
#include <stdexcept>
#include <sstream>
    using std::ostringstream;

#include "Car.h"

//default constructor
Car::Car() : Car("Black","SUV",0)
{
   this->enginePtr = new Engine("V8");
}

//constructor calls another constructor
Car::Car(string color, string type) : Car(color, type, 5)  
{
}

// constructor creates an engine object on the stack
Car::Car(string color, string type, int doors)
:color{color}, type{type},doors{doors}
{
    this->enginePtr = new Engine("V8");
}

// destructor
Car::~Car() //Destructor
{
    std::cout << "calling Car Destructor\n";
    delete this->enginePtr;
    this->enginePtr=nullptr;
}

void Car::setColor(string color)
{
    this->color = color;
}

void Car::setType(string type, int doors)
{
    if (type != "Sedan" && type != "SUV")
    {
        throw std::invalid_argument("Invalid Car Type");
    }

    this->type = type;
    this->doors = doors;
}

void Car::setType(string type)
{
    this->type = type;
}

void Car::setDoors(int doorsNum)
{
    this->doors = doorsNum;
}


void Car::setModel(string eng)
{
   this->enginePtr->setModel(eng);

}

string Car::getColor() const
{
   return this->color;
}

string Car::getType() const
{
   return this->type;
}

int Car::getDoors() const
{
   return this->doors;
}

void Car::setEngine(string eng)
{

}

//Creates a composed string as opposed to outputting to the terminal
string Car::toString()
{
    ostringstream output;
    output << "A " << this->color << " " << this->type
           << " , with " << this->doors << " doors and with a " 
           << this->enginePtr->getModel() <<  " engine.\n" ;
    return output.str();

}

