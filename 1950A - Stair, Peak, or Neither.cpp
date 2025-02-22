#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int a, int b, int c) {
    if (a < b && b < c) {
        cout << "STAIR" << endl;
    } else if (a < b && b> c) {
        cout << "PEAK" << endl;
    } else {
        cout << "NONE" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        solve(a, b, c);
    }

    return 0;
}
