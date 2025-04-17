#include <iostream>
using namespace std;

void PrintRangeRecursive(int a, int b) {
    if (a > b) return;
    cout << a << " ";
    PrintRangeRecursive(a + 1, b);
}

int main() {
    int a, b;
    cin >> a >> b;
    PrintRangeRecursive(a, b);
    cout << endl;
}

