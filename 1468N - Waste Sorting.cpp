#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    vector<int> c(3);
    for (int i = 0; i < 3; i++) cin >> c[i];
    vector<int> a(5);
    for (int i = 0; i < 5; i++) cin >> a[i];

    for (int i = 0; i < 5; i++) {
        if (i == 0) {
            if ((c[0] - a[i]) >= 0) {
                c[0] -= a[i];
            } else {
                cout << "NO" << endl;
                return;
            }
        } else if (i == 1) {
            if ((c[1] - a[i]) >= 0) {
                c[1] -= a[i];
            } else {
                cout << "NO" << endl;
                return;
            }
        } else if (i == 2) {
            if ((c[2] - a[i]) >= 0) {
                c[2] -= a[i];
            } else {
                cout << "NO" << endl;
                return;
            }
        } else if (i == 3 && a[i] > 0) {
            if ((c[0] + c[2]) >= a[i]) {
                if (c[0] >= a[i]) {
                    c[0] -= a[i];
                } else {
                    int leftover = a[i] - c[0];
                    c[0] = 0;
                    c[2] -= leftover;
                }
            } else {
                cout << "NO" << endl;
                return;
            }
        } else if (i == 4 && a[i] > 0) {
            if ((c[1] + c[2]) >= a[i]) {
                if (c[1] >= a[i]) {
                    c[1] -= a[i];
                } else {
                    int leftover = a[i] - c[1];
                    c[1] = 0;
                    c[2] -= leftover;
                }
            } else {
                cout << "NO" << endl;
                return;
            }
        } 
    }
    cout << "YES" << endl;
    return;
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
