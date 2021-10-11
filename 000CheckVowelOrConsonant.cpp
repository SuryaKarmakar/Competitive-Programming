/* Write a program to identify if the character is a vowel or consonant
1. should be check both uppercase and lowercase alphabet
*/
#include<iostream>
using namespace std;

int checkIsVowel(char x){
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
        return 1;
    else 
        return 0;    
}
int main(){
    char x;
    int result;
    cout << "Enter A Alphabet : ";
    cin >> x;

    result = checkIsVowel(x);
    if(result == 1)
        cout << x << " This Is A Vowel";
    else 
        cout << x << " This Is A Consonant";
    return 0;
}