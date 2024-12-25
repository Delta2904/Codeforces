#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        if (n % 2 == 0) {
            dp[i] = 2 * dp[i - 2];
        } else {
            dp[i] = 0;
        }
    }

    cout << dp[n] << endl;
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
