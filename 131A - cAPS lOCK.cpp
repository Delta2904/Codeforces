#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin >> s;

    bool caplock = true, allUpper = true;

    if (islower(s[0])) {
        allUpper = false;
        for (size_t i = 1; i < s.size(); i++) {
            if (!isupper(s[i])) {
                caplock = false;
                break;
            }
        }
    } else {
        for (size_t i = 0; i < s.size(); i++) {
            if (!isupper(s[i])) {
                allUpper = false;
                caplock = false;
                break;
            }
        }
    }

    if (caplock && !allUpper) {
        s[0] = toupper(s[0]); 
        for (size_t i = 1; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
    } else if (allUpper) {
        for (size_t i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
