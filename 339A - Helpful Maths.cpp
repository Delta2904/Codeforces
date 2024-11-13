#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    vector<int> v;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '+') {
            continue;
        } else {
            v.push_back(s[i] - '0');
        }
    }

    sort(v.begin(), v.end());

    for(int j = 0; j < v.size(); j++) {
        if(j == v.size() - 1) {
            cout << v[j] << endl;
        } else {
            cout << v[j] << "+";
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    solve(s);

    return 0;
}