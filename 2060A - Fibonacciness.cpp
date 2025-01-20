#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int a, int b, int d, int e) {
    int x, y, z;

    x = a + b;
    y = d - b;
    z = e - d;

    if (x == y && y == z) {
        cout << 3 << endl;
        return;
    } else if (x == y || y == z || x == z) {
        cout << 2 << endl;
        return;
    } else {
        cout << 1 << endl;
        return;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, d, e;
        cin >> a >> b >> d >> e;

        solve(a, b, d, e);
    }

    return 0;
}
