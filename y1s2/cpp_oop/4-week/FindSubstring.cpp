#include <iostream>
#include <string>

int findSubstring(const std::string& str, const std::string& substr) {
    size_t pos = str.find(substr);
    return (pos != std::string::npos) ? static_cast<int>(pos) : -1;
}

int main() {
    std::string text = "hello GTU";
    std::string target = "GTU";
    std::cout << "Position: " << findSubstring(text, target) << std::endl;
    return 0;
}
