#include <iostream>

using namespace std;

int main(){

    // to check entered character is uppercase or lowercase.

    char ch;
    cout << "Enter character: ";
    cin >> ch;

    if( ch >= 'A' && ch <= 'Z'){
        cout << "Upper Case. \n";
    }else{
        cout << "Lower Case. \n";
    }

    char aplhabet;
    cout << "Enter Second Character: ";
    cin >> aplhabet;

    if( aplhabet >= 65 && aplhabet <=90){   // here we have used ASCII value of A(65) and Z(90)
        cout << "Uppper Case.\n";    
    }else{
        cout << "Lower Case. \n";
    }

    return 0;
}