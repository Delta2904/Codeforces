#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int mililiters = (k * l) / nl;
    int limes = c *d;
    int salt = p / np;

    int sol = min(mililiters, min(limes, salt)) / n;

    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
