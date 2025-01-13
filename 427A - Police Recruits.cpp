#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve( int n) {
    int police = 0, crimes = 0;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (police == 0) {
            if (a[i] == -1) {
                crimes++;
            } else {
                police += a[i];
            }
        } else {
            if (a[i] > 0) {
                police += a[i];
            } else {
                police--;
            }
        }
    }
    cout << crimes << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    solve(n);

    return 0;
}
