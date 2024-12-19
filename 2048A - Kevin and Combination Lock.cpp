#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int x) {
    string target = "33";
    while (x >= 0) {
        if (x == 0) {
            cout << "YES" << endl;
            return;
        } else if (x >= 33) {
            string number = to_string(x);
            size_t pos = number.find(target);

            if (pos != std::string::npos && x > 33) {
                number.erase(pos, 2);
                x = stoi(number);
            } else {
                x -= 33;
            }
        } else if (x < 33) {
            cout << "NO" << endl;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int x;
        cin >> x;

        solve(x);
    }

    return 0;
}