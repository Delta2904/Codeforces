#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s) {
    int a = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            a++;
        } else if (s[i] == 'D') {
            d++;
        }
    }

    if (a > d) {
        cout << "Anton" << endl;
    } else if (d > a) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> n >> s;

    solve(n, s);

    return 0;
}
