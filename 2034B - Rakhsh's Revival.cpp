#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, int k, const string& s) {
    vector<int> ps(n, 0);
    int ans = 0;
    int cnt = 0;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += ps[i];
        if (sum > 0 || s[i] == '1') {
            cnt = 0;
        } else {
            cnt++;
            if (cnt == m) {
                ans++;
                sum++;
                cnt = 0;
                if (i + k < n) {
                    ps[i + k]--;
                }
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        string s;
        cin >> n >> m >> k >> s;
        solve(n, m, k, s);
    }

    return 0;
}
