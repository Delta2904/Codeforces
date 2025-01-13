#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int a, b, days = 0, twosocks = 0;
    cin >> a >> b;

    days = min(a, b);
    a -= days;
    b -= days;

    if (a >= 2) {
        twosocks += a / 2;
    } else if (b >= 2){
        twosocks += b / 2;
    }

    cout << days << " " << twosocks<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
