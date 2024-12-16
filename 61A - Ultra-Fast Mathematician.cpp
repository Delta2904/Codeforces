#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string s1, s2, s3;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            s3 += '1';
        } else {
            s3 += '0';
        }
    }

    cout << s3 << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}