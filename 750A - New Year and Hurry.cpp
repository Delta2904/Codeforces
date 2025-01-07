#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, int k) {
    int i = 0, sol = k;

    do {
        i++;
        sol += 5 * i;
    } while ((((i * 5) + sol) <= 240 && i < n));

    if (sol > 240) {
        cout << i - 1 << endl;
    } else {
        cout << i << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    solve(n, k);

    return 0;
}
