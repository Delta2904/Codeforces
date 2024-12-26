#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> a) {
    for (int i = 0; i < n - 1; i++) {
        if (abs(a[i] - a[i + 1]) != 5 && abs(a[i] - a[i + 1]) != 7) {
            cout << "NO" << endl;
            return;
        } 
    }

    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        solve(n, a);
    }

    return 0;
}