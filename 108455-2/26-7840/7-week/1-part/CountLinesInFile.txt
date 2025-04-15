#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.txt");
    string line;
    int count = 0;
    while (getline(file, line)) {
        count++;
    }
    cout << count << endl;
}

