#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> a) {
    int twos = 0, equal = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 2) {
            twos++;
        }
    }

    if (twos == 0) {
        cout << 1 << endl;
        return;
    }

    if (twos % 2 == 0) {
        equal = twos / 2;
        for (int j = 0; j < n; j++) {
            if (a[j] == 2) {
                twos--;
                if (twos == equal) {
                    cout << j + 1 << endl;
                    return;
                }
            }
        }
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
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
