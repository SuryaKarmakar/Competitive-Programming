/* Write a program to find Factorial of a number 
[+] Formula : n! = n x (n - 1)!
[+] Example : n! = 5!
=> 5! = 5 x 4 x 3 x 2 x 1 */

#include<iostream>
using namespace std;

int findFactorialNumber(int x){
    int fact = 1;
    int i;

    for(i = 1 ; i <= x ; i++)
        fact = fact * i;
    return fact; 
}

int main(){
    int x, result;
    cout << "Enter A Number : ";
    cin >> x;

    result = findFactorialNumber(x);
    cout << "Factorial Of This " << x << " Number Is : " << result;
    return 0;
}