/* Write a program to find ASCII values of a character */

#include<iostream>
using namespace std;

int findASCIIValue(char x){
    // here we convert char to int with help of "type casting"
    return (int) x;
}

int main(){
    char x;
    int result;
    cout << "Enter A Character : ";
    cin >> x;

    result = findASCIIValue(x);
    cout << "ASCII Value Of This " << x << " : " << result;
    return 0;
}