#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    int sol1 = 0, sol2 = 0;
    for (int i = 0; i < 6; i++) {
        if (i < 3) {
            int dig = n % 10;
            n /= 10;
            sol1 += dig;
        } else {
            int dig = n % 10;
            n /= 10;
            sol2 += dig;
        }
    }

    if (sol1 == sol2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
