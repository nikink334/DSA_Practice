#include <iostream>

using namespace std;

int main(){

    // if n=4  then print
    // 1
    // 12
    // 123
    // 1234

    int n;
    cout << "enter value for n:";
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}