#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    set<int> alphabet;

    if (n >= 26) {
        for (char &ch : s) {
            ch = tolower(ch);
            alphabet.insert(ch);
        }

        if (alphabet.size() >= 26) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}