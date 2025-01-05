#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> a(5, 0);
    int taxi = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x]++;
    }

    taxi += a[4];

    int onesleft = min(a[1], a[3]);
    taxi += a[3];
    a[1] -= onesleft;

    if (a[2] % 2 == 0) {
        taxi += a[2] / 2;
    } else {
        taxi += a[2] / 2;
        taxi++;
        a[1] -= 2;
    }

    taxi += ceil(a[1] / 4.0);

    cout << taxi << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    solve(n);

    return 0;
}
