#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    map<string, int> names;
    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        if (names[x] == 0) {
            cout << "OK" << endl;
        } else {
            cout << x << names[x] << endl;
        }
        names[x]++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    solve(n);

    return 0;
}
