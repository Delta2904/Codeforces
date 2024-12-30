#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    int x = 0, y = 0, z = 0, aux1, aux2, aux3;

    for (int i = 0; i < n; i++) {
        cin >> aux1 >> aux2 >> aux3;
        x += aux1; y += aux2; z += aux3;
    }

    if (x == 0 && y == 0 && z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    solve(n);

    return 0;
}
