#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<int> a) {
    sort(a.begin(), a.end());

    if ((a[0] + a[1]) == a[2]) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<int> a(3);
        for (int i = 0; i < 3; i++) cin >> a[i];

        solve(a);
    }

    return 0;
}
