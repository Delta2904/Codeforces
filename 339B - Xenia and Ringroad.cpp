#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, int m) {
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    int current = 1;
    ll time = 0;

    for (int i = 0; i < m; i++) {
        if (current <= a[i]) {
            time += a[i] - current;
            current = a[i];
        } else if (current > a[i]) {
            time += n - (current - a[i]);
            current = a[i];
        }
    }

    cout << time << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    solve(n, m);

    return 0;
}
