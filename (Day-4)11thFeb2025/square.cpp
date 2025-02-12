#include <iostream>

using namespace std;

int main(){

    // if n=3/4/6/9 then print 
    // 123      1234    ******      ABCDEFGHI
    // 123      1234    ******      ABCDEFGHI
    // 123      1234    ******      ABCDEFGHI
    // outer loop prints the n times
    // inner loop print what should be in one line

    // #Note:: 1 to n and 0 to n-1 is same.
    int n;
    cout << "enter the value for n: ";
    cin >> n ; 
    cout << endl;

    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=n-1; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=n-1; j++){
            cout << "* " ;
        }
        cout << endl;
    }

    cout << endl;

    for(int i=0; i<=n; i++){

        char ch = 'A';
        for(int j=0; j<n; j++){
            cout << ch << " ";
            ch = ch+1;
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}