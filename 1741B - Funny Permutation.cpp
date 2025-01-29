#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    if (n == 2) {
        cout << "2 1\n";
    } else if (n == 3) {
        cout << "-1\n";
    } else {
        cout << n << " " << n - 1 << " ";
        for (int i = 1; i <= n - 2; i++) {
            cout << i << " ";
        }
        cout << "\n";
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
