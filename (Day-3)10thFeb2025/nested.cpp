#include <iostream>

using namespace std;

int main(){

    int n = 5;
    for(int i=1; i<=n; i++){    // from this loop it will prinet 5 line of repeated code
        int m=10;
        for(int j=1; j<=m; j++){    // from this line it will print 10 star in one line
            cout << "*" ;
        }
        cout << endl;   // after 10 star it will go on next line and then on line number 8 for loop
    }

    return 0;
}