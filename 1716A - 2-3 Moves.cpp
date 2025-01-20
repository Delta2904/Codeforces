#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    if (n == 1) {
        cout << 2 << endl;
        return;
    } 

    if (n % 3 == 0) {
        cout << n / 3 << endl;
        return;
    } else if (n % 3 == 1 && n >= 5) {
        cout << (n / 3) + 1 << endl;
        return;
    } else if (n % 3 == 2 && n >= 5) {
        cout << (n + 2) / 3 << endl;
        return;
    } else if (n % 2 == 0) {
        cout << n / 2 << endl;
        return;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        solve(n);
    }

    return 0;
}
