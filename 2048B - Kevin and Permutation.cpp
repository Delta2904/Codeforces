#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, int k) {
    int maxN = n, minN = 1, sum = 0;
    vector<int> p(n);

    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            p[i - 1] = minN;
            minN++;
        } else {
            p[i - 1] = maxN;
            maxN--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
        sum += p[i];
    }

    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        solve(n, k);
    }

    return 0;
}