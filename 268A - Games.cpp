#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    int sol = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i].first == a[j].second) sol++;
        }
    }
    
    cout << sol << endl;
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
