#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int a, b, sol = 0, i = 1;
    cin >> a >> b;

    if (a % b == 0) {
        cout << 0 << endl;
    } else {
        cout << (b - (a % b)) % b << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}