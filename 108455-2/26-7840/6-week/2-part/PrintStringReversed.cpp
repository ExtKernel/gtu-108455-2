#include <iostream>
using namespace std;

void PrintStringReversed(const string& s, int i = 0) {
    if (i == s.size()) return;
    PrintStringReversed(s, i + 1);
    cout << s[i];
}

int main() {
    string s;
    cin >> s;
    PrintStringReversed(s);
    cout << endl;
}

