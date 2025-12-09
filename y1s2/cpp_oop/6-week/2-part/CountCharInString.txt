#include <iostream>
using namespace std;

int CountCharInString(const string& s, char c, int i = 0) {
    if (i == s.size()) return 0;
    return (s[i] == c) + CountCharInString(s, c, i + 1);
}

int main() {
    string s;
    char c;
    cin >> s >> c;
    cout << CountCharInString(s, c) << endl;
}

