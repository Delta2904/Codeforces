#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> a(n);
    int sum = 0, taken = 0, j = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end());

    while (taken <= sum) {
        taken += a[n - 1 - j];
        sum -= a[n - 1 - j];
        j++;
    }

    cout << j << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    solve(n);

    return 0;
}
