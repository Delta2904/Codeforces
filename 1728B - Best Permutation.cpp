#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    if (n % 3 == 2) {
        for (int i = 1; i <= n; i++) cout << i << " ";
        cout << "\n";
    } else if (n % 3 == 1) {
        for (int i = 3; i <= n - 2; i++) cout << i << " ";
        for (int i = 2; i >= 1; i--) cout << i << " ";
        cout << n - 1 << " " << n << "\n";
    } else {
        for (int i = 2; i <= n - 1; i++) {
            if (i != n - 2) {
                cout << i << " ";
            }
        }
        cout << "1 " << n - 2 << " " << n << "\n";
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
