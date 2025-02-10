#include <iostream>

using namespace std;

int main(){

    //type casting have two types: implicit and explicit
    // implicit means small data type to big data type conversion
    char grade  ='A';   // ASCII value of A is = 65
    int value = grade;
    cout << value <<endl;
    
    int a = 15;
    cout << sizeof(a) <<endl;   // size will be 4 bytes cause of in data type
    double b = a;
    cout << sizeof(b) <<endl;   // size will be 8 bytes cause of double data type.


    // explicit  means big data type to small data type
    double price = 678.56785678;
    int roundOfPrice = (int)price;
    cout << sizeof(price) << " and "  << roundOfPrice << " and " << sizeof(roundOfPrice) <<endl;
    return 0;
}
