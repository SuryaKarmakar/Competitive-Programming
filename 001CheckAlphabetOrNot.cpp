/* Write a program to identify if the character is an alphabet or not
1. without using any predefined function
2. should be check both uppercase and lowercase alphabet
*/

#include<iostream>
#include<ctype.h>

using namespace std;

int checkIsAlphabet(char x){
    // isalpha() this is a predefined function that can be check is alphabet or not 
    // before using this isalpha() function you should be import ctype.h this header file in the top
    // if (isalpha(x))
    if(x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
        return 1;
    else 
        return 0;    
}

int main(){
    char x;
    int result;
    cout << "Enter A Character : ";
    cin >> x;

    result = checkIsAlphabet(x);
    if(result == 1)
        cout << x << " This Is A Alphabet";
    else 
        cout << x << " This Is Not Alphabet";
    return 0;
}