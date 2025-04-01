#include <iostream>
#include <vector>

class NumberOperations {
public:
    // Task 1
    static int sum(int a, int b) {
        return a + b;
    }
    
    // Task 2
    static int square(int num) {
        return num * num;
    }
    
    // Task 3
    static bool isEven(int num) {
        return num % 2 == 0;
    }
    
    // Task 4
    static int findLargest(int a, int b, int c) {
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        return max;
    }
    
    // Task 5
    static long long factorial(int num) {
        if (num <= 1) return 1;
        
        long long result = 1;
        for (int i = 2; i <= num; i++) {
            result *= i;
        }
        return result;
    }
    
    // Task 7
    static bool isPrime(int num) {
        if (num <= 1) return false;
        if (num <= 3) return true;
        if (num % 2 == 0 || num % 3 == 0) return false;
        
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
    
    // Task 8
    static int arraySum(const std::vector<int>& arr) {
        int sum = 0;
        for (int num : arr) {
            sum += num;
        }
        return sum;
    }
    
    // Task 10
    static int reverseNumber(int num) {
        int reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        return reversed;
    }
};

int main() {
    using std::cout;
    using std::endl;

    // Task 1 test
    int a = 5, b = 10;
    cout << "Sum of " << a << " and " << b << ": " << NumberOperations::sum(a, b) << endl;

    // Task 2 test
    int num = 7;
    cout << "Square of " << num << ": " << NumberOperations::square(num) << endl;

    // Task 3 test
    cout << num << " is " << (NumberOperations::isEven(num) ? "Even" : "Odd") << endl;

    // Task 4 test
    int x = 15, y = 25, z = 20;
    cout << "Largest of " << x << ", " << y << ", and " << z << ": " << NumberOperations::findLargest(x, y, z) << endl;

    // Task 5 test
    int factNum = 5;
    cout << "Factorial of " << factNum << ": " << NumberOperations::factorial(factNum) << endl;

    // Task 7 test
    int primeCheckNum = 29;
    cout << primeCheckNum << " is " << (NumberOperations::isPrime(primeCheckNum) ? "Prime" : "Not Prime") << endl;

    // Task 8 test
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Sum of array elements: " << NumberOperations::arraySum(numbers) << endl;

    // Task 10 test
    int reverseNum = 12345;
    cout << "Reverse of " << reverseNum << ": " << NumberOperations::reverseNumber(reverseNum) << endl;

    return 0;
}

