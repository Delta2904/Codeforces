#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, int m) {
    int mn = min(n, m);

    (mn % 2 == 0) ? cout << "Malvika\n" : cout << "Akshat\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    solve(n, m);

    return 0;
}
