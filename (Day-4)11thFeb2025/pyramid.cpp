#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "enter value for n: ";
    cin >> n;
    cout << endl;

    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        // number
        for(int j=1; j<=i+1; j++){
            cout << j ;
        }

        // for number 2
        for(int k=i; k>0; k--){
            cout << k;
        }

        cout << endl;
    }

    return 0;
}