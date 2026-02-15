#include <iostream>
#include <string>

template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << "maxValue(3, 7) = " << maxValue(3, 7) << "\n";
    std::cout << "maxValue(3.5, 2.1) = " << maxValue(3.5, 2.1) << "\n";
    std::cout << "maxValue(std::string(\"abc\"), std::string(\"xyz\")) = "
              << maxValue(std::string("abc"), std::string("xyz")) << "\n";
    return 0;
}
