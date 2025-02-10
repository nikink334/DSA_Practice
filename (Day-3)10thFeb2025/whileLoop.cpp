#include <iostream>

using namespace std;

int main(){

    // while loop: while(condition){//code}
    // first condition is checked if its true then while block is executed
    // make sure do not write infinite loop in code.

    int n;
    cout << "Enter value for n: ";
    cin >> n;

    int i = 1;  // intialization so first  we give 1 value to count variable.
    while(i<= n){     // here check if count value is greater than equal to n if yes then the block
        cout << i << endl;  //  then simplly print value of count i.e. 1
        i++;    // then we add 1 in that count value and now it gose on while line condition
    }   

    return 0;
}