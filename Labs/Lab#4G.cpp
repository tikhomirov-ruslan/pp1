#include <iostream>
using namespace std;
int main() {
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        for(int j = n - 1; j >= 0; j--) {
            if (i == j) {
                cout << i + 1;
            }
            else {
                cout << ".";
            }
        }
        cout << '\n';
    }
}