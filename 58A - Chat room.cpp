#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s) {
    string hello = "hello";
    int j = 0;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == hello[j]) {
            j++;
            if (j == 5) { 
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
