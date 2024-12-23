#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int minMoves = INT_MAX;

    for (int i = 0; i < n; i++) {
        minMoves = min(minMoves, abs(a[i]));
    }

    cout << minMoves << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    solve(n);

    return 0;
}