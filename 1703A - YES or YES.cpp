#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s) {
    for (char &c : s) {
        c = std::tolower(static_cast<unsigned char>(c));
    }

    if (s == "yes") {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        solve(s);
    }

    return 0;
}