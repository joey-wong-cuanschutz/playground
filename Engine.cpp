//Engine.cpp
#include <iostream>

#include <string>
    using std::string;

#include "Engine.h"

Engine::Engine()
{
   model = "";
   bigBlock = 0;
}

Engine::Engine(string model) : model{model}
{//intentionally left blank
}

//destructor
Engine::~Engine() 
{
    //nothing to do here. Car class destructor does it.
    std::cout << "calling Engine Destructor" << std::endl;
}


string Engine::getModel() const
{
    return this->model;
}

void Engine::setModel(string Model)
{
   this->model = Model;
}

bool Engine::getBigBlock() const
{
   return this->bigBlock;
}

void Engine::setBigBlock(bool big)
{
   this->bigBlock = big;
}



