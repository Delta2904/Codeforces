#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int maxIdx = 0;
    int minIdx = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxIdx]) maxIdx = i;
        if (a[i] <= a[minIdx]) minIdx = i;
    }

    int sol = maxIdx;
    sol += (n - 1 - minIdx);

    if (maxIdx > minIdx) sol--;

    cout << sol << endl;
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
