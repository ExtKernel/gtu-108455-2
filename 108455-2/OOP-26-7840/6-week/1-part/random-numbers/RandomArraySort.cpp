#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    srand(time(0));
    vector<int> arr(10);
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }
    sort(arr.begin(), arr.end());
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

