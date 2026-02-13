#include <iostream>
#include <algorithm>
#include <numeric>

int main() {
    int Y, W;
    std::cin >> Y >> W;

    int maxRoll = std::max(Y, W);
    int successfulOutcomes = 7 - maxRoll;
    int totalOutcomes = 6;

    if (successfulOutcomes <= 0) {
        std::cout << "0/1" << std::endl;
        return 0;
    }

    if (successfulOutcomes == totalOutcomes) {
        std::cout << "1/1" << std::endl;
        return 0;
    }

    int gcd = std::gcd(successfulOutcomes, totalOutcomes);
    successfulOutcomes /= gcd;
    totalOutcomes /= gcd;

    std::cout << successfulOutcomes << "/" << totalOutcomes << std::endl;
    return 0;
}
