#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "enter value for n: ";
    cin >> n;
    cout << endl;

    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout << char('A'+j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

// PS C:\Users\Nikita\Desktop\2025\DSA\(Day-4)11thFeb2025> ./a.exe
// enter value for n: 3

// 1
// 2 1
// 3 2 1