#include <iostream>
#include <string>

std::string ciur() {
    std::string rsp; // raspuns
    for (int i = 0; i <= 100; ++i) {
        if (i / 2 != 2) rsp += std::to_string(i) + " ";
    }
    return rsp;
}

int main() {
    std::cout << ciur() << std::endl;
    return 0;
}