#include <iostream>
#include <string>
#include <time.h>
#include <algorithm>

int main() {
    int randomIndex;

    std::string colorChoice[2] = {"black", "red"};
    std::string correctColor;
    std::string pickedColor;
    int bettingAmount;

    std::cout << "Hello, and welcome to our color guessing game!\nPlease choose a betting amount (minimum $5): ";
    std::cin >> bettingAmount;

    std::transform(pickedColor.begin(), pickedColor.end(), pickedColor.begin(), ::tolower);

    while (bettingAmount >= 5) {
        srand(time(NULL));
        randomIndex = rand() % 2;  // Creates randomIndex for colorChoice array
        correctColor = colorChoice[randomIndex];

        std::cout << "Pick a color between black and red: ";
        std::cin >> pickedColor;

        if (pickedColor == correctColor) {
            bettingAmount *= 2;
            char answer;
            std::cout << "You win! Your cash has been doubled!" << " You have $" << bettingAmount << " left." << " Do you want to cash out? (y, n) ";
            std::cin >> answer;

            if (tolower(answer) == 'y') {
                break;
            }

            if (tolower(answer) == 'n') {
                continue;
            }
        }
        else if (pickedColor != correctColor) {
            bettingAmount /= 2;

            if (bettingAmount >= 5) {
                char answer;
                std::cout << "You lost! Your cash has been deducted!" << " You have $" << bettingAmount << " left." << " Do you want to cash out? (y, n) ";
                std::cin >> answer;

                if (tolower(answer) == 'y') {
                    break;
                }

                if (tolower(answer) == 'n') {
                    continue;
                }
            }
            else {
                break;
            }
        }
    }

    if (bettingAmount >= 5) {
        std::cout << "Here, have your $" << bettingAmount << ". Bye bye!\n";
    }
    else if (bettingAmount < 5) {
        std::cout << "I'm sorry that you lost all of your money! Bye bye!\n";
    }
    
    return 0;
}