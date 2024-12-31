#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s) {
    int ones = 0, zeros = 0;

    if (s.size() < 7) {
        cout << "NO" << endl;
        return;
    }

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            zeros = 0;
            ones++;
            
            if (ones == 7) {
                cout << "YES" << endl;
                return;
            }
        } else if (s[i] == '0'){
            ones = 0;
            zeros++;

            if (zeros == 7) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    solve(s);

    return 0;
}
