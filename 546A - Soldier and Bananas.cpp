#include <bits/stdc++.h>
using namespace std;

void solve(int k, int n, int w) {
    int cost = 0;
    for (int i = 1; i <= w; i++) {
        cost += i * k;
    }    

    if(cost > n) {
        cout << (cost - n) << endl;
    } else {
        cout << 0 << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k, n, w;
    cin >> k >> n >> w;

    solve(k, n, w);

    return 0;
}