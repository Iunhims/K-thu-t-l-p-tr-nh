#include <iostream>
#include <string>

bool isPalindrome(const std::string& str, int low, int high) {

    if (low >= high) {
        return true;
    }

    
    if (str[low] != str[high]) {
        return false;
    }

    
    return isPalindrome(str, low + 1, high - 1);
}

int main() {
    int testCases;
    std::cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        std::string str;
        std::cin >> str;

        bool result = isPalindrome(str, 0, str.length() - 1);
        std::cout << result << std::endl;
    }

    return 0;
}
