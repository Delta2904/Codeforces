#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    int p, q, x;
    set<int> a;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> x;
        a.insert(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x;
        a.insert(x);
    }

    if (a.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

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