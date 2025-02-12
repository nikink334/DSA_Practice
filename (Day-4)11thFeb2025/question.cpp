#include <iostream>
using namespace std;

int main() {
    int n = 4;  // Number of rows for the upper half (including the middle row)
    
    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        // Print the first set of stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        
        // Print the spaces in the middle
        for (int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }

        // Print the second set of stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print the first set of stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        // Print the spaces in the middle
        for (int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }

        // Print the second set of stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
