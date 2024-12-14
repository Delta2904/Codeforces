#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    set<int> s;
    int var;
    for (int i = 0; i < 4; i++) {
        cin >> var;
        s.insert(var);
    }

    cout << 4 - s.size() << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}