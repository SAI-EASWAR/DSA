#include <iostream>
#include <map>
#include <string>

int main() {
    std::string inputString = "hello, world!";
    std::map<char, int> charCountMap;

    // Iterate through the string and count each character
    for (char c : inputString) {
        if (std::isalpha(c)) {  // Check if the character is an alphabet letter
            // Convert the character to lowercase (optional)
            c = std::tolower(c);
            
            // Use the map to count the character
            charCountMap[c]++;
        }
    }

    // Print the character count
    for (const auto& pair : charCountMap) {
        std::cout << "Character: " << pair.first << ", Count: " << pair.second << std::endl;
    }

    return 0;
}
