#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ifstream file("names.txt");
    vector<string> names;
    string name;
    while (getline(file, name)) {
        names.push_back(name);
    }
    sort(names.begin(), names.end());
    for (const auto& n : names) {
        cout << n << endl;
    }
}

