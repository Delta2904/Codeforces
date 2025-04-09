#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    int n = s.size();
    
    reverse(s.begin(), s.end());
    
    int piv = 0;
    while (piv < n && s[piv] == '0') {
        piv++;
    }
    
    int sol = piv - 1;
    
    for (; piv < n; piv++) {
        if (s[piv] != '0') {
            sol++;
        }
    }
    
    cout << sol << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        solve(s);
    }

    return 0;
}
