#include <iostream>
#include <fstream>
using namespace std;

class NumberReader {
public:
    int SumFromFile(const string& filename) {
        ifstream file(filename);
        int sum = 0, x;
        while (file >> x) {
            sum += x;
        }
        return sum;
    }
};

int main() {
    NumberReader reader;
    cout << reader.SumFromFile("numbers.txt") << endl;
}

