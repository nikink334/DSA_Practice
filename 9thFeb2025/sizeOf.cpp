#include <iostream>

using namespace std;

int main(){

    // 1 byte is equals to 8 bits  i.e. 4 bytes == 32 bits.
    // smaleest data type in cpp is bool or char

    // to know about how much space dose every data type takes in memory
    // we use sizeof(variableName) function

    int age = 20;       // int data type takes 4 bytes space in memory i.e. 32 bits.
    cout << sizeof(age) <<endl;

    char grade = 'C';   // char data type takes 1 bytes space in memory i.e. 8 bits.
    cout << sizeof(grade) <<endl;

    float PI = 3.142f;   // float data type takes 4 bytes space in memory i.e. 32 bits.
    cout << sizeof(PI) <<endl;

    bool isSafe = true; // bool data types takes 1 bytes space in memory i.e. 8 bits.
    cout << sizeof(isSafe) <<endl;

    double remainBalance = 6786.8907;   // double takes 8 bytes i.e. 64 bits.
    cout << sizeof(remainBalance) <<endl;

    return 0;
}