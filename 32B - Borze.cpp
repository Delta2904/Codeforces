#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s) {
    string decode;
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            decode += '0';
        } else if (s[i] == '-') {
            i++;
            if (s[i] == '.') decode += '1';
            else decode += '2';
        }
    }

    cout << decode << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    solve(s);

    return 0;
}
