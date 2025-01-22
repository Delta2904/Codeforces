#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int l, int r) {
    if (l == 1 && r == 1) {
        cout << 1 << endl;
        return;
    } else {
        cout << r - l << endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        solve(l, r);
    }

    return 0;
}
