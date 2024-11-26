#include <bits/stdc++.h>
using namespace std;

void solve(string s, string t) {
    string reversed(s);
    int j = 0;
    
    for (int i = s.size() - 1; i >= 0; i--) {
        reversed[j] = s[i];
        j++;
    }

    if (reversed == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, t;
    cin >> s >> t;

    solve(s, t);

    return 0;
}
