#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, int m) {
    cout << max(n, m) + 1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        solve(n, m);
    }

    return 0;
}
