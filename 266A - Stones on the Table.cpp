#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == s[i + 1]) {
            count++;
        }
    }
    cout << count << endl;
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