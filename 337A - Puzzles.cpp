#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, int m) {
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int mndif = INT_MAX;

    for (int i = 0; i < m - n + 1; i++) {
        int mx = INT_MIN, mn = INT_MAX;
        for (int j = i; j < n + i; j++) {
            mx = max(a[i], a[j]);
            mn = min(a[i], a[j]);
        }
        mndif = min(mndif, abs(mx - mn));
    }
    cout << mndif << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    solve(n, m);

    return 0;
}
