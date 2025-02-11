#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int n;
    cout << "enter value for n: ";
    cin >> n;

    do{
        cout << i << " ";  // i is printed first i.e. 1
        i++;               // then i is incremented i.e. 1+1=2
    } while( i<=n );       // then condition is checked if its tru then it again goes on 13th line.
    
    cout << endl;
    return 0;
}