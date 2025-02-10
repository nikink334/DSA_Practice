#include <iostream>

using namespace std;

int main(){

    // to check wether number is positive or not

    int n;
    cout << "Enter Number To Check: ";
    cin >> n;
    if(n >= 0){
        cout << "The Given Number Is Positive" <<endl;
    } else{
        cout << "The Give Number Is Negative." <<endl;
    }

    // to check wether given number is odd or even.

    int a;
    cout << "\nEnetr Number:" ;
    cin >> a;
    if( a % 2 == 0 ){
        cout << "Even";
    }else{
        cout << "Odd";
    }

    // can drive car or not
    int age;
    cout << "\nEnter Your Age: ";
    cin >> age;
    if( age >= 18){
        cout << "You can drive";
    }else{
        cout << "You Cannot drive";
    }

    return 0;
}