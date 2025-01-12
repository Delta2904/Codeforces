#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    string s = to_string(n);

    if (n <= 9) {
        cout << n << endl;
    } else {
        int num = (s.size() - 1) * 9 + (s[0] - '0');
        cout << num << endl;
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
