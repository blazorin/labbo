#include <iostream>
#include <set>
#include <vector>

using namespace std::chrono;

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::set<std::string> setOfString;
    std::vector<std::string> vectorOfString;

    auto startSetChrono = high_resolution_clock::now();

    setOfString.emplace("heya1");
    setOfString.emplace("malupi2");
    setOfString.emplace("ab");
    setOfString.emplace("macarrones");
    setOfString.emplace("jugueticos");

    auto stopSetChrono = high_resolution_clock::now();
    auto durationSetChrono = duration_cast<microseconds>(stopSetChrono - startSetChrono);

    std::cout << std::endl << "SET duration: " << durationSetChrono.count() << std::endl;

    auto startVectorChrono = high_resolution_clock::now();

    vectorOfString.emplace_back("heya1");
    vectorOfString.emplace_back("malupi2");
    vectorOfString.emplace_back("ab");
    vectorOfString.emplace_back("macarrones");
    vectorOfString.emplace_back("jugueticos");

    auto stopVectorChrono = high_resolution_clock::now();
    auto durationVectorChrono = duration_cast<microseconds>(stopVectorChrono - startVectorChrono);

    std::cout << "VECTOR duration: " << durationVectorChrono.count() << std::endl;

    return 0;
}
