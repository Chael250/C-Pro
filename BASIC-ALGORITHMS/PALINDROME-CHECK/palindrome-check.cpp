#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while(left < right) {
        if(str[left] != str[right]){
            return false;
        } else {
            left++;
            right--;
        }
    }
    return true;
}

int main(){
    string str;
    cout << "WELCOME TO C++ PRO BY Chael" << endl;
    cout << "This is the implementation of palindrome check algorithm" << endl;
    cout << "Enter the string to check if it is a palindrome: ";
    cin >> str;

    if(isPalindrome(str)){
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}