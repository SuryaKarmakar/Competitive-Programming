/* Write a program to find ASCII values of a character */

#include<iostream>
using namespace std;

int findASCIIValue(char x){
    return (int) x;
}

int main(){
    char x;
    int result;
    cout << "Enter A Character : ";
    cin >> x;

    result = findASCIIValue(x);
    cout << result;
    return 0;
}