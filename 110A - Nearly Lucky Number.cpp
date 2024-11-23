#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    int lucky = 0;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == '4' || s[i] == '7') {
            lucky++;
        }
    }

    if (lucky == 4 || lucky == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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