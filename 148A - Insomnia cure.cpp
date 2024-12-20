#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int k, l, m, n, d, sol = 0;
    cin >> k >> l >> m >> n >> d;

    for (int i = 1; i <= d; i++){
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            sol++;
        }
    }

    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
