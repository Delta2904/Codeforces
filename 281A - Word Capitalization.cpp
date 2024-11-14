#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    transform(s.begin(), s.begin() + 1,s.begin(), ::toupper);

    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    solve(s);

    return 0;
}