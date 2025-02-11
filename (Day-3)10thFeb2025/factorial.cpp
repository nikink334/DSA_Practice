#include <iostream>

using namespace std;

int main(){

    // fatorial till 1 to n

    int n;
    cout << "enter value for n: ";
    cin >> n;

    int fact = 1;

    if( n<0 ){
        cout << "Enter Positive Number.\n";
    }else{
        for (int i=1; i<=n; ++i){
            fact = fact*i;
        }
        cout << "Factorial of " << n << " is " << fact << endl;
    }

    return 0;
}