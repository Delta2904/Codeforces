#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int sum = 0, res = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '+') {
            sum++;
        } else if(s[i] == '-') {
            res++;
        }
    }

    if (sum == 2) {
        return 1;
    } else if (res == 2) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x = 0;
    cin >> n;
    string s;

    while(n--) {
        cin >> s;

        x += solve(s);
    }

    cout << x << endl;
}