#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> a(n);
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];

    int even = 0, noteven = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] % 2 == 0) {
            even++;
        } else {
            noteven++;
        }
    }

    if (even == 3 || noteven == 3) {
        bool even = (a[2] % 2 == 0);
        for (int i = 3; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                if (!even) {
                    cout << i + 1 << endl;
                    return;
                }
            } else {
                if (even) {
                    cout << i + 1 << endl;
                    return;
                }
            }
        }
    } else {
        if (even > noteven) {
            if (a[0] % 2 != 0) {
                cout << 1 << endl;
                return;
            } else {
                for (int i = 1; i < 3; i++) {
                    if (a[i] % 2 != 0) {
                        cout << i + 1<< endl;
                        return;
                    }
                }
            }
        } else {
            if (a[0] % 2 == 0) {
                cout << 1 << endl;
                return;
            } else {
                for (int i = 0; i < 3; i++) {
                    if (a[i] % 2 == 0) {
                        cout << i + 1 << endl;
                        return;
                    }
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    solve(n);

    return 0;
}
