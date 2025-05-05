#include<iostream>
using namespace std;

int factorial(int number){
    if(number < 0){
        cout << "Undefined for negative numbers" << endl;
        return 0;
    }

    int result = 1;

    for(int i = 1; i <= number; i++){
        result = result * i;
    }

    return result;
}

int main(){
    int number;
    cout << "WELCOME TO C++ PRO BY Chael" << endl;
    cout << "This is the implementation of factorial algorithm using iterative methods" << endl;
    cout << "Enter the number to find factorial: ";
    cin >> number;

    int result = factorial(number);

    cout << "This is the result: " << result << endl;

    return 0;
}