#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int a, int b) {
    int diff = max(a, b) - min(a, b);

    if (diff % 10 == 0) {
        cout << diff / 10 << endl;
    } else {
        cout <<(diff / 10) + 1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        solve(a, b);
    }

    return 0;
}
