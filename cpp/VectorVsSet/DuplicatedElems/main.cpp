#include <iostream>
#include <set>
#include <vector>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::set<std::string> setOfString;

    setOfString.emplace("heya1");
    setOfString.emplace("malupi2");
    setOfString.emplace("malupi2");
    setOfString.emplace("heya1");
    setOfString.emplace("ab");

    std::cout << std::endl << "SET output: " << std::endl;
    for (auto& elem : setOfString)
        std::cout << elem << std::endl;

    return 0;
}
