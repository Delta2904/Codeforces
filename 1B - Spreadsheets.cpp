#include <bits/stdc++.h>
#define ll long long
using namespace std;

string columnNumberToString(int col) {
    string result;
    while (col > 0) {
        int r = (col - 1) % 26;
        char c = char('A' + r);
        result = c + result;
        col = (col - 1) / 26;
    }
    return result;
}

int stringToColumnNumber(const string &s) {
    int col = 0;
    for (char c : s) {
        col = col * 26 + (c - 'A' + 1);
    }
    return col;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (n--) {
        string s;
        getline(cin, s); 

        bool R1C1 = false;
        int row = 0, col = 0;

        if (!s.empty() && s[0] == 'R') {
            size_t posC = s.find('C', 1);
            if (posC != string::npos) {
                try {
                    row = stoi(s.substr(1, posC - 1));
                    col = stoi(s.substr(posC + 1));
                    R1C1 = true;
                } catch (...) {
                    R1C1 = false;
                }
            }
        }

        if (R1C1) {
            string colLetters = columnNumberToString(col);
            cout << colLetters << row << "\n";
        } else {
            int i = 0;
            while (i < (int)s.size() && isalpha(s[i])) {
                i++;
            }
            string colLetters = s.substr(0, i);
            string rowDigits = s.substr(i);

            col = stringToColumnNumber(colLetters);
            row = stoi(rowDigits);

            cout << "R" << row << "C" << col << "\n";
        }
    }

    return 0;
}
