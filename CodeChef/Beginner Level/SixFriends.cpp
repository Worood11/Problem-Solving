#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cin >> y;
        if (x * 3 < y * 2) {
            cout << x * 3 << endl;
        } else {
            cout << y * 2;
        }

    }
}