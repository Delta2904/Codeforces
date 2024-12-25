#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, int m, int a, int b) {
    int sol = INT_MAX;
    vector<int> calc(3);

    calc[0] = n * a;
    calc[1] = (n / m) * b + (n % m) * a;
    calc[2] = (ceil((double)n / m) * b);

    
    for (int i = 0; i < 3; i++) {
        sol = min(sol, calc[i]);
    }

    cout << sol << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    solve(n, m, a, b);

    return 0;
}
