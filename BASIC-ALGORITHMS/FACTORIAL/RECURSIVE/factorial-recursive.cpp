#include<iostream>
using namespace std;

int factorial(int number){
    if(number < 0){
        cout << "Undefined for negative numbers";
        return 0;
    } else if(number == 0 || number == 1){
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}

int main(){
    int number;
    cout << "WELCOME TO C++ PRO BY Chael" << endl;
    cout << "This is the implementation of factorial using recursive method" << endl;
    cout << "Enter the number: ";
    cin >> number;

    int result = factorial(number);

    cout << "The result is: " << result << endl;

    return 0;
}