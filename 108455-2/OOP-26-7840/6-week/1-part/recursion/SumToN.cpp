#include <iostream>
using namespace std;

int SumToN(int n) {
    if (n == 1) return 1;
    return n + SumToN(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << SumToN(n) << endl;
}

