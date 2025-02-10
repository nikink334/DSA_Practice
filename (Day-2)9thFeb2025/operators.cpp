#include <iostream>

using namespace std;

int main(){

    // AIRTHEMETIC OPERATORS: [+,-,*,/,%]
    int a = 8, b = 2;

    cout << "Addition: " << (a+b) <<endl;
    cout << "Subtraction: " << (a-b) <<endl;
    cout << "Multiply: " << (a*b) <<endl;
    cout << "Division: " << (a/b) <<endl;
    cout << "Modulo: " << (a%b) <<endl;


    // RELATIONAL OPERTAORS: [<, <=, >, >=, ==, !=]  // they only return true of false

    cout << (3 < 25) <<endl;
    cout << (3 <= 2) <<endl;
    cout << (3 > 52) <<endl;
    cout << (3 >= 3) <<endl;
    cout << (2 == 2) <<endl;
    cout << (2 != 2) <<endl<<endl;


    // LOGICAL OPERATORS: [ or || (know as pipe), and && (ampercent), not ! (not)]
    // or || : if one statement is true and other is false then print True, if both are false then false.
    // and && : if one is true and other is false then print false, if both true then true
    // not ! : if the statement is true then it will return false and viceversa.

    cout << ( 1>0 || 1>2) <<endl;
    cout << ( 5>2 && 8>2) <<endl;
    cout << ( !(20 == 20)) <<endl;


    return 0;
}