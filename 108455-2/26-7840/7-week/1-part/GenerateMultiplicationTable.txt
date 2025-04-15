#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("table.txt");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            file << i << " x " << j << " = " << i * j << " ";
        }
        file << endl;
    }
}

