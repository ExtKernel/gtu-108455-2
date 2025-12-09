#include <iostream>
#include <string>

std::string compareStrings(const std::string& str1, const std::string& str2) {
    int result = str1.compare(str2);
    if (result == 0) return "equal";
    return (result > 0) ? ("greater than " + str2) : ("less than " + str2);
}

int main() {
    std::string a = "GTU";
    std::string b = "ISU";
    std::cout << "Comparison result: " << compareStrings(a, b) << std::endl;
    return 0;
}

