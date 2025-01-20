#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<pair<int, bool>> a(n, {0, false});
    for (int i = 0; i < n; i++) cin >> a[i].first;
    int sol = 0;

    if (n == 1) {
        cout << 0 << endl;
        return;
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] == a[j] && a[i].second == false && a[j].second == false) {
                    sol++;
                    a[i].second = true;
                    a[j].second = true;
                }
            }
        }
    }
    
    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        solve(n);
    }

    return 0;
}
