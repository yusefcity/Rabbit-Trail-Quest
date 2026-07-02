#include <iostream>
#include <cstdlib>
#include <ctime>

int randomPath() {
    return std::rand() % 3 + 1;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int score = 0;
    const int rounds = 5;

    std::cout << "=== Rabbit Trail Quest ===\n";

    for (int i = 1; i <= rounds; ++i) {
        int safePath = randomPath();
        int choice;

        std::cout << "\nRound " << i << "\n";
        std::cout << "Choose a path (1-3): ";
        std::cin >> choice;

        if (choice == safePath) {
            std::cout << "You discovered a magic flower!\n";
            score += 10;
        } else {
            std::cout << "The path was empty.\n";
            score += 2;
        }
