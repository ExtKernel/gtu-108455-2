#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int maxVal = 0;
    for (int i = 0; i < 20; i++) {
        int num = rand() % 100 + 1;
        cout << num << " ";
        if (num > maxVal) maxVal = num;
    }
    cout << endl << maxVal << endl;
}

