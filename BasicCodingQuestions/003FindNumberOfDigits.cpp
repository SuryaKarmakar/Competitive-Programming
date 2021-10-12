/* Write a program to find Number of digits in an integer
[+]Logic : After taking the input from the user, run while loop until the user given number becomes 0 or less than 0. Inside the loop for each iteration increase the 
counter variable by one and divide the user given number by 10 and store it in the same variable again.
Once the loop is over we have to print counter variable count containing the total number of digits.
[+]Example : if user enter 2240 then :
2240 / 10 remaining 224 => now count 1,
224 / 10 remaining 22 => now count 2,
22 / 10 remaining  2 => now count 3,
2 / 10 remaining  0 => now count 4 
*/

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