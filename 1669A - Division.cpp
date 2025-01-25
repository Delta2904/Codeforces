#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    if (n <= 1399) {
        cout << "Division 4" << endl;
    } else if (1400 <= n && n <= 1599) {
        cout << "Division 3" << endl;
    } else if (1600 <= n && n <= 1899) {
        cout << "Division 2" << endl;
    } else {
        cout << "Division 1" << endl;
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
