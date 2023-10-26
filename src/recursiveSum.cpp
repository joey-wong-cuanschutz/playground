#include <iostream>

// define prototypes
int sumRecursive(int numberInput);


int main(){
    using std::cout;
    using std::endl;

    int recursionNumberInput{0};

    cout << "Enter a number for recursion " << endl;

    std::cin >> recursionNumberInput;

    if (recursionNumberInput%2 == 0){
        cout << sumRecursive(recursionNumberInput) << endl;
    }

    else{
        recursionNumberInput = recursionNumberInput - 1;
        cout << sumRecursive(recursionNumberInput) << endl;
    }

    return 0;
};



int sumRecursive(int numberInput){
    // end case statement
    if (numberInput == 0){
        return 0;
    }

    else {

        return numberInput + sumRecursive(numberInput - 2);
    }

}