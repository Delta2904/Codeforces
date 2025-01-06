#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int s) {
    vector<int> a;
    int sum = 0;

    for (int i = 9; i > 0; i--) {
        if (sum == s) {
            break;
        } else if ((sum + i) <= s) {
            sum += i;
            a.push_back(i);
        }
    }

    sort(a.begin(), a.end());
    for (size_t j = 0; j < a.size(); j++) cout << a[j];
    
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int s;
        cin >> s;

        solve(s);
    }

    return 0;
}
