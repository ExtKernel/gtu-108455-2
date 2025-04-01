#include <iostream>
#include <string>

class StringUtils {
public:
    // Task 9
    static int calculateLength(const std::string& str) {
        return lengthHelper(str, 0);
    }

private:
    static int lengthHelper(const std::string& str, int index) {
        if (str[index] == '\0') {
            return index;
        }
        return lengthHelper(str, index + 1);
    }
};

int main() {
    using std::cout;
    using std::endl;
    using std::string;

    // test
    string exampleString = "Hello, World!";
    int length = StringUtils::calculateLength(exampleString);

    cout << "Length of the string \"" << exampleString << "\" is: " 
         << length << " characters." << endl;

    return 0;
}

