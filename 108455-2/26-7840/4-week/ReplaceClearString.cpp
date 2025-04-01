#include <iostream>
#include <string>

std::string replaceSubstring(std::string str, const std::string& toFind, const std::string& toReplace) {
    size_t pos = str.find(toFind);
    if (pos != std::string::npos) {
        str.replace(pos, toFind.size(), toReplace);
    }
    return str;
}

void clearString(std::string& str) {
    str.clear();
}

int main() {
    std::string text = "Hello, GTU";
    text = replaceSubstring(text, "GTU", "ISU");
    std::cout << "Replaced: " << text << std::endl;

    clearString(text);
    std::cout << "Cleared: " << (text.empty() ? "empty" : text) << std::endl;
    
    return 0;
}
