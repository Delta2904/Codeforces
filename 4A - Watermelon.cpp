#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int w;
    cin >> w;

    if (w % 2 == 0 && w > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}