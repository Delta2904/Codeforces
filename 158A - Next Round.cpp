#include <bits/stdc++.h>
using namespace std;

void solve(int k, int n, vector<int> a) {
    int prom, sol = 0;
    prom = a[k - 1];

    for (int i = 0; i < n; i++) {
        if(a[i] >= prom && a[i] > 0) {
            sol++;
        }
    }

    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    solve(k, n, a);
}