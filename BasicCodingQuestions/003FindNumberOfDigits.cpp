/* Write a program to find Number of digits in an integer */

#include<iostream>
using namespace std;

int findNumberOfDigits(int x){
    int count = 0;
    while (x > 0){
        x /= 10;
        count ++;
    }
    return count;
}

int main(){
    int x, result;
    cout << "Enter Number : ";
    cin >> x;

    result = findNumberOfDigits(x);
    cout << "Total Number Of Digits Is : " << result;
    return 0;
}