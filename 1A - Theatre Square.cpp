#include <iostream>
using namespace std;
#define ll long long

void solve(ll n, ll m, ll a) {
    ll sol, ceilN, ceilM;

    ceilN = (n + a - 1) / a;
    ceilM = (m + a - 1) / a;

    cout << ceilN * ceilM << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, m, a;
    cin >> n >> m >> a;

    solve(n, m, a);
    
    return 0;
}
