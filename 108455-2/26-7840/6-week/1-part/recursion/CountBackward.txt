#include <iostream>
using namespace std;

void CountBackward(int n) {
    if (n < 1) return;
    cout << n << " ";
    CountBackward(n - 1);
}

int main() {
    CountBackward(10);
}

