#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    int low = 0, upp = 0;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            upp++;
        } else {
            low++;
        }
    }

    if(low >= upp) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else if (upp > low) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    cout << s << endl;
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