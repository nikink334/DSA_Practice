#include <iostream>

using namespace std;

int main(){

    // sum of all odd numbers till n

    //BY FOR LOOP
    int n;
    cout << "enter value for n: ";
    cin >> n;

    int oddNumSum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            oddNumSum += i;
        }
    }

    cout << "Sum Till N of Odd Numbers Are: " << oddNumSum << endl;

    // BY WHILE LOOP

    // int num;
    // cout << "enter value for num: ";
    // cin >> num;
    // int i=1;
    // int oddSum = 0;
    // while (i<=num){
    //     if(i%2 != 0){
    //         oddSum += i;
            
    //     }
    //     i++;
    // }
    // cout << oddSum <<endl;


    // SUM OF EVEN NUMBER TILL N BY WHILE LOOP
    // int num;
    // cout << "enter value for num: ";
    // cin >> num;
    // int i=1;
    // int evenSum = 0;
    // while (i<=num){
    //     if(i%2 == 0){
    //         evenSum += i;
            
    //     }
    //     i++;
    // }
    // cout << evenSum <<endl;
    
    
    return 0;
}