#include <iostream>

using namespace std;

int main(){

    // sum of 1 to n numers.

    // BY FOR LOOP
    int n;
    cout << "enter value for: ";
    cin >> n;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << "Sum: " <<sum<< endl;

    // BY WHILE LOOP
    // int i =1;
    // while(i<=n){
    //     sum += i;
    //     i++;
    //     if(i==5){
    //        break;    // here break is keyword
    //     }
    // }
    // cout << sum <<endl;

    return 0;
}