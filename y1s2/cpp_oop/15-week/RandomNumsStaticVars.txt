#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RandomCounter {
    static int counter;
public:
    void generate() {
        int num = rand() % 101;  // [0..100]
        counter++;
        cout << "Generated number: " << num << ", Count: " << counter << endl;
    }
};

int RandomCounter::counter = 0;

int main() {
    srand(time(nullptr));
    RandomCounter rc;

    for (int i = 0; i < 5; ++i) {
        rc.generate();
    }

    return 0;
}
