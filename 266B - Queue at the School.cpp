#include <bits/stdc++.h>
using namespace std;

void solve(int n, int t) {
    string s;
    cin >> s;

    for(int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }

    cout << s << endl;

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> n >> t;

    solve(n, t);

    return 0;
}