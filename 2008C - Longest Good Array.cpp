#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int l, int r) {
    int sol = l, n = 1;

    while (sol <= r) {
        sol += n;
        n++;
    }

    cout << n - 1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        solve(l, r);
    }

    return 0;
}
