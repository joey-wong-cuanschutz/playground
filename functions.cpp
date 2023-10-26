//functions.cpp
#include <iostream>
	using std::cout;
   using std::endl;
   using std::cin;

#include "functions.h"

void displayMenu()
{
    cout << "1)Add Car" <<endl;
    cout << "2)Print Cars" <<endl;
    cout << "99)Exit" <<endl;
    cout << ">> ENTER OPTION >> ";

    return;
}

void addCar(vector<Car*>& inv)
{
   string color;
   string model;
   int doors;
   cout << "Enter Car Color >>";
   cin >> color;
   cin.ignore();
   cout << "Enter Model >>";
   cin >> model;
   cout << "# of doors >>";
   cin.ignore();
   cin >> doors;
   Car* aNewCar = new Car(color, model, doors);
   std::cout << "aNewCar : " << aNewCar << std::endl;
   inv.push_back(aNewCar);

   return;

}

