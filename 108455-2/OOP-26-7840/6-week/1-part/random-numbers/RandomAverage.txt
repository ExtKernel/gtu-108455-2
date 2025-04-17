#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num = rand() % 100 + 1;
        sum += num;
        cout << num << " ";
    }
    cout << endl << sum / (double)n << endl;
}

