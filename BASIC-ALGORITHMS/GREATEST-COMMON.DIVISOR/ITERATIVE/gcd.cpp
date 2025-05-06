#include<iostream>
using namespace std;

int euclidean(int number1, int number2){
    if(number1 == 0){
        return number2;
    } else if(number2 == 0){
        return number1;
    } else {
        while(number2 != 0){
            int temp = number2;
            number2 = number1 % number2;
            number1 = temp;
        }
        return number1;
    }
}

int main(){
    int number1, number2;
    cout << "WELCOME TO C++ PRO BY Chael" << endl;
    cout << "This is the implementation of GCD algorithm using iterative methods" << endl;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    int result = euclidean(number1, number2);

    cout << "This is the result: " << result << endl;

    return 0;
}