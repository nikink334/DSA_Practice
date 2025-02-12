#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "enter value for n: ";
    cin >> n;
    cout << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i=0; i<n; i++){
        
        for(int j=0; j<i+1; j++){
            cout << (i+1) << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i=0; i<n; i++){
        char ch='A' + i;
        for(int j=0; j<i+1; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}