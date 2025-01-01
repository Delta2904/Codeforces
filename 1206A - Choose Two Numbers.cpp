#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    bool bf = true;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    cout << a[a.size() - 1] << " " << b[b.size() - 1] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
