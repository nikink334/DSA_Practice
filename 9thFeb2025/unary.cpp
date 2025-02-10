#include <iostream>
using namespace std;

int main() {
    // Two types of increment: ++ (increment) and -- (decrement)

    // 🟢 Increment Operators
    int a = 10;
    int b = a++; // Post-increment: Assign 'a' to 'b' first, then increment 'a'
    cout << "Post-Increment: " << endl;
    cout << "b (old value of a): " << b << endl; // Output: 10
    cout << "a (after increment): " << a << endl; // Output: 11

    int c = 10;
    int d = ++c; // Pre-increment: Increment 'c' first, then assign to 'd'
    cout << "\nPre-Increment: " << endl;
    cout << "d (updated c): " << d << endl; // Output: 11
    cout << "c (after increment): " << c << endl; // Output: 11

    // 🔴 Decrement Operators
    int x = 10;
    int y = x--; // Post-decrement: Assign 'x' to 'y' first, then decrement 'x'
    cout << "\nPost-Decrement: " << endl;
    cout << "y (old value of x): " << y << endl; // Output: 10
    cout << "x (after decrement): " << x << endl; // Output: 9

    int p = 10;
    int q = --p; // Pre-decrement: Decrement 'p' first, then assign to 'q'
    cout << "\nPre-Decrement: " << endl;
    cout << "q (updated p): " << q << endl; // Output: 9
    cout << "p (after decrement): " << p << endl; // Output: 9

    return 0;
}
