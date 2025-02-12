#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "enter value for n: ";
    cin >> n;
    cout << endl;

    int num=1;
    for(int i=0; i<n; i++){

        // for spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }

        // for to print numbers
        for(int k=0; k<n-i; k++){
            cout << i+1;
        }

        cout << endl;
    }
    cout << endl;

    char ch= 'A';
    for(int i=0; i<n; i++){

        // for spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }

        // for to print numbers
        for(int k=0; k<n-i; k++){
            cout << ch;
        }
        ch++;

        cout << endl;
    }

    return 0;
}