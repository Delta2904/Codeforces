#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b) {
    for (int i = 1; i < INT_MAX; i++) {
        if (i % a == 0 && i % b == 0) {
            cout << i << endl;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        solve(a, b);
    }

    return 0;
}