#include <bits/stdc++.h>
using namespace std;

void solve(int n, int a, int b, string s) {
    int x = 0, y = 0, i = 0;
    int steps = 0;
    while (steps < 210) {
        if (x == a && y == b) {
            cout << "YES" << endl;
            return;
        }
        
        if (s[i] == 'N') {
            y++;
        } else if (s[i] == 'E') {
            x++;
        } else if (s[i] == 'S') {
            y--;
        } else if (s[i] == 'W') {
            x--;
        }
        
        i = (i + 1) % n;
        steps++;
    }
    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        solve(n, a, b, s);
    }

    return 0;
}