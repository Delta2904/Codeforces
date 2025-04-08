#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<int> a(n);
    int zeroes = 0, ones = 0, twos = 0, three = 0, fives = 0;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            zeroes++;
        } else if (a[i] == 1) {
            ones++;
        } else if (a[i] == 2){
            twos++;
        } else if (a[i] == 3) {
            three++;
        } else if (a[i] == 5) {
            fives++;
        }

        if(zeroes >= 3 && ones >= 1 && twos >= 2 && three >= 1 && fives >= 1) {
            cout << i + 1 << "\n";
            return;
        }
    }
    cout << "0\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        solve(n);
    }

    return 0;
}
