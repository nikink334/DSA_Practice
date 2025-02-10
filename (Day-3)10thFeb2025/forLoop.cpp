#include <iostream>

using namespace std;

int main(){

    // print till n numbers

    int n;
    cout << "enter value for n: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        cout << i << " " ;
    }
    cout << endl;

    // print till num but droppint one number agter j
    int num;
    cout << "enter value for n: ";
    cin >> num;
    for(int j=1; j<=n; j = j+2){
        cout << j << " " ;
    }
    cout << endl;


    return 0;
}