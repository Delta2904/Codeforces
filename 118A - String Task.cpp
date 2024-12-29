#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s) {
    string sol;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == 'a'|| s[i] == 'o'|| s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i'){
            continue;
        } else {
            sol += '.';
            sol += s[i];
        }
    }
    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    solve(s);

    return 0;
}
