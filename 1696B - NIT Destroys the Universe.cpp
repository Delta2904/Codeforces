#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> a(n);
    int zeros = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) zeros++;
    } 

    if (zeros == n) {
        cout << 0 << "\n";
    } else if (!zeros) {
        cout << 1 << "\n";
    } else {
        int L = 0, R = n - 1;
        while (a[L] == 0) L++;
        while (a[R] == 0) R--;

        bool zeroinside = false;
        for (L; L < R; L++) {
            if (a[L] == 0) {
                zeroinside = true; 
                break;
            }
        }

        (zeroinside ? cout << 2 << "\n" : cout << 1 << "\n");
    }
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
