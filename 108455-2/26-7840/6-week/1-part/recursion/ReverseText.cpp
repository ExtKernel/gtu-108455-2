#include <iostream>
using namespace std;

string ReverseText(const string& s) {
    if (s.empty()) return "";
    return ReverseText(s.substr(1)) + s[0];
}

int main() {
    string s;
    cin >> s;
    cout << ReverseText(s) << endl;
}

