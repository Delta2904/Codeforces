#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    if (n % 2 == 0) {
        cout << "-1\n";
    } else {
        for (int i = 1; i <= n; i++){
            if (i % 2 == 1) {
                cout << i << " ";
            }
        }
        for (int i = 1; i <= n; i++){
            if (i % 2 == 0) {
                cout << i << " ";
            }
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
