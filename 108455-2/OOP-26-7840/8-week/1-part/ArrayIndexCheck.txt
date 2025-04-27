#include <iostream>
#include <vector>
using namespace std;

class ArrayAccessor {
public:
    int GetElement(const vector<int>& arr, int index) {
        if (index < 0 || index >= arr.size()) throw out_of_range("Invalid index");
        return arr[index];
    }
};

int main() {
    int size, index;
    cin >> size >> index;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) arr[i] = i;
    ArrayAccessor accessor;
    try {
        cout << accessor.GetElement(arr, index) << endl;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}

