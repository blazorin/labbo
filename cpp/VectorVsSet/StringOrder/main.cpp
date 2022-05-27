#include <iostream>
#include <set>
#include <vector>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::set<std::string> setOfString;
    std::vector<std::string> vectorOfString;

    setOfString.emplace("heya1");
    setOfString.emplace("malupi2");
    setOfString.emplace("ab");

    vectorOfString.emplace_back("heya1"); // or push_back, doesn't matter
    vectorOfString.emplace_back("malupi2");
    vectorOfString.emplace_back("ab");

    std::cout << std::endl << "SET output: " << std::endl;
    for (auto& elem : setOfString)
        std::cout << elem << std::endl;

    std::cout << std::endl << std::endl << "Vector output: " << std::endl;
    for (auto& elem : vectorOfString)
        std::cout << elem << std::endl;


    return 0;
}
