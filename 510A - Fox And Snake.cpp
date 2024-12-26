#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, int m) {
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            cout << string(m, '#') << "\n";
        } else {
            if (i % 4 == 2) {
                cout << string(m - 1, '.') << '#' << "\n";
            } else {
                cout << "#" << string(m - 1, '.') << "\n";
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    solve(n, m);

    return 0;
}
