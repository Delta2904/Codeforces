#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s) {
    vector<string> wub;
    size_t pos = 0;
    string found;

    while ((pos = s.find("WUB")) != string::npos) {
        if (pos > 0) {
            wub.push_back(s.substr(0, pos));
        }
        s = s.substr(pos + 3);
    }
    
    if (!s.empty()) {
        wub.push_back(s);
    }

    for (int j = 0; j < wub.size(); j++) {
        if (wub[j] != "WUB") {
            cout << wub[j] << " ";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    solve(s);

    return 0;
}
