#include <iostream>

using namespace std;

int main(){

    // sum of all numbers till n who are divisible by 3

    int n;
    cout << "enter value for n: ";
    cin >> n;

    int sum = 0;

    for(int i=1; i<=n; i++){
        if(i%3 == 0){
            sum = sum + i;
        }

    }
    cout << sum <<endl;
    
    return 0;
}