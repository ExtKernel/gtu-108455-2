#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("messages.txt", ios::app);
    string message;
    for (int i = 0; i < 3; i++) {
        getline(cin, message);
        file << message << endl;
    }
}

