#include <iostream>

using namespace std;

int main(){

    // if n=3 then print 
    //      123     ABC
    //      456     DEF
    //      789     GHI

    int n;
    cout << "enter value for n: ";
    cin >> n;
    cout << endl;
    int num=1;

    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            cout << num << " ";
            num++;            
        }
        cout << "\n";
    }
    cout << endl;

    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            cout << ch << " ";
            ch++;            
        }
        cout << "\n";
    }
    cout << endl;
    
    return 0;
}