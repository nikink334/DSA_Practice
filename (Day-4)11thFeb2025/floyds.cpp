#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "enter value for n: ";
    cin >> n;
    cout << endl;

    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;

    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}