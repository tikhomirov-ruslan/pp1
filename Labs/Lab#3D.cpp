#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int pos;
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
            pos = i;
        }
    }
    cout << pos + 1;
}