#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("numbers.txt");
    if (!file.is_open()) {
        cout << "File not found" << endl;
        return 0;
    }
    int x, sum = 0;
    while (file >> x) {
        sum += x;
    }
    cout << sum << endl;
}

