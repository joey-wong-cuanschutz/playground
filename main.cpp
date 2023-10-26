#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;

#include <string>
    using std::string;
#include "Car.h"
#include "functions.h"
#include <vector>

int main()
{
    std::vector<Car*> inventory;  // a vector of pointers

    int option{0};  // variable for menu option

    while(option != 99)
    {
        displayMenu();
        cin >> option;

        if (option == 1)
        {
           addCar(inventory);
        }
        if (option == 2)
        {
            cout << endl;
            for (Car* CarPTR: inventory)
            {
                cout << CarPTR->toString();
            }
        }
    }//end while

 


    //free up memory
    for (Car* CarPTR: inventory)
    {
        delete CarPTR;
    }

}

