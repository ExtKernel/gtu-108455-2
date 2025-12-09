#include <iostream>
using namespace std;

int BinaryToDecimal(const string& s, int i = 0) {
    if (i == s.size()) return 0;
    return (s[i] - '0') * (1 << (s.size() - i - 1)) + BinaryToDecimal(s, i + 1);
}

int main() {
    string s;
    cin >> s;
    cout << BinaryToDecimal(s) << endl;
}

