#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    if (n % 4 == 0 || n % 7 ==0 || n % 47 == 0 || n % 74 == 0) {
        cout << "YES" << endl;
    } else {
        string s = to_string(n);
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] == '4' || s[i] == '7') {
                continue;
            } else {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
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
