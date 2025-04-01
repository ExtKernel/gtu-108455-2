#include <iostream>
#include <string>

std::string appendStrings(std::string str1, const std::string& str2) {
    str1.append(str2);
    return str1;
}

int main() {
    std::string first = "Hello, ";
    std::string second = "GTU";
    std::cout << "Combined: " << appendStrings(first, second) << std::endl;
    return 0;
}

