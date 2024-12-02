#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, int k, string s) {
    int res = 0;
    int i = 0; 

    while (i < n) {
        if (s[i] == '1') {
            i++;
        } else {
            int l = i;
            
            while (i < n && s[i] == '0') i++;
            int L = i - l;
            int positions_needed = 0;
            if (m == 1) {
                positions_needed = L;
            } else {
                positions_needed = max(0, ((L - m) / (m - 1)) + 1);
            }

            int operations_needed = (positions_needed + k - 1) / k;
            res += operations_needed;
        }
    }
    cout << res << endl;
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
