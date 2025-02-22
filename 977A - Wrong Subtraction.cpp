#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k) {
    for (int i = 0; i < k; i++) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n -= 1;
        }
    }

    cout << n << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    solve(n, k);

    return 0;
}