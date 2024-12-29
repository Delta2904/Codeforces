#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> intervals(n);
    for (int i = 0; i < n; i++) {
        cin >> intervals[i].first >> intervals[i].second;
    }

    vector<int> forced_count(2 * n + 1, 0);
    for (auto &p : intervals) {
        int L = p.first;
        int R = p.second;
        if (L == R) {
            forced_count[L]++;
        }
    }

    vector<int> zero_count(2 * n + 1, 0);
    for (int x = 1; x <= 2 * n; x++) {
        zero_count[x] = (forced_count[x] == 0 ? 1 : 0);
    }

    vector<int> prefixZero(2 * n + 1, 0);
    for (int x = 1; x <= 2 * n; x++) {
        prefixZero[x] = prefixZero[x - 1] + zero_count[x];
    }

    string ans;
    ans.reserve(n);

    for (int i = 0; i < n; i++) {
        int L = intervals[i].first;
        int R = intervals[i].second;
        
        if (L == R) {
            if (forced_count[L] == 1) {
                ans.push_back('1');
            } else {
                ans.push_back('0');
            }
        } else {
            int countZerosInRange = prefixZero[R] - prefixZero[L - 1];
            if (countZerosInRange > 0) {
                ans.push_back('1');
            } else {
                ans.push_back('0');
            }
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
