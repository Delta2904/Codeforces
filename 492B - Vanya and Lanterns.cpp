#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, ll l) {
    vector<ll> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    double minradius = (double)a[0];
    for (int i = 1; i < n; i++) {
        minradius = max(minradius, (double)(a[i] - a[i - 1]) / 2.0);
    }
    minradius = max(minradius, (double)(l - a.back()));

    cout << fixed << setprecision(9) << minradius << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll l;
    cin >> n >> l;

    solve(n, l);

    return 0;
}
