#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int target = rand() % 50 + 1;
    int guess;
    while (true) {
        cin >> guess;
        if (guess < target) cout << "Higher" << endl;
        else if (guess > target) cout << "Lower" << endl;
        else break;
    }
    cout << "Correct" << endl;
}

