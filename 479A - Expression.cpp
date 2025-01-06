#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int a, int b, int c) {
    int mx = -1;

    mx = max(mx, a + b + c);
    mx = max(mx, a * b * c);
    mx = max(mx, a * (b + c));
    mx = max(mx, (a + b) * c);

    cout << mx << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    solve(a, b, c);

    return 0;
}
