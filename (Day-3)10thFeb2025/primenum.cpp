#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "enter value for n: ";
    cin >> n;

    bool isPrime = true;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        } 
    }

    if (isPrime && n > 1) {
        cout << "Prime Number" << endl;
    } else {
        cout << "Not Prime Number" << endl;
    }

    return 0;
}