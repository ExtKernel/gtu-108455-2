#include <iostream>
#include <string>

std::pair<char, char> firstAndLast(const std::string& str) {
    if (str.empty()) {
        throw std::invalid_argument("String is empty");
    }
    return {str.at(0), str.at(str.size() - 1)};
}

int main() {
    std::string input = "GTU";
    auto result = firstAndLast(input);
    std::cout << "First: " << result.first << ", Last: " << result.second << std::endl;
    return 0;
}
