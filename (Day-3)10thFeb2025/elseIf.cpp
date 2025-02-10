#include <iostream>

using namespace std;

int main(){

    // grading system
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if( marks >= 90){   // cond: is marks are greater than equal to 90 i.e. 90 or more than 90
        cout << "Grade: A\n";
    } else if( marks >= 80 && marks < 90){  // cond: marks should be between 80-90 range. so i.e. both should be true
        cout << "Grade: B\n";
    } else if( marks >=70 && marks < 80){
        cout << "Grade: C\n";
    } else if( marks >= 35 && marks < 70){
        cout << "Grade: D\n";
    } else{
        cout << "Grade: F\n";
    }


    return 0;
}