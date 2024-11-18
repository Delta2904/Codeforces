#include <bits/stdc++.h>
using namespace std;

void solve(int x) {
    if(x % 5 == 0) {
        cout << x / 5 << endl;
    } else {
        cout << (x / 5) + 1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x;
    cin >> x;

    solve(x);

    return 0;
}