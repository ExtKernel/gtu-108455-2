#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("data.txt");
    outFile << "Final exam is coming!";
    outFile.close();

    ifstream inFile("data.txt");
    string line;
    if (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
