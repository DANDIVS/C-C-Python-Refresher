#include <iostream>
#include <vector>
#include <map>
#include <string>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::map<std::string, int> ages = {
        {"Alice", 30},
        {"Bob", 25},
        {"Charlie", 35}
    };

    std::cout << "Numbers: ";
    for (auto n : nums) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    std::cout << "Ages:\n";
    for (const auto &entry : ages) {
        std::cout << entry.first << ": " << entry.second << "\n";
    }

    auto it = ages.find("Bob");
    if (it != ages.end()) {
        std::cout << "Bob found, age = " << it->second << "\n";
    }

    return 0;
}
