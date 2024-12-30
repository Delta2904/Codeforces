#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    vector<string> sol;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] != '0'){
            string iter = s[i] + string(s.size() - i - 1, '0');
            sol.push_back(iter);
        }
    }

    cout << sol.size() << endl;

    for (size_t i = 0; i < sol.size(); i++) {
        cout << sol[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
