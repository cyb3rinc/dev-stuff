#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

typedef std::map< std::string, std::vector<std::string> > BaseMap;
BaseMap BandsMap;
std::string genre;

int main() {
    std::vector<std::string> rockBands = {"Tool", "Led Zeppelin", "Megadeth", "Metallica", "Pink Floyd"};
    std::vector<std::string> popBands = {"Justin Bieber", "Selena Gomez", "Ariana Grande"};
    std::vector<std::string> trapBands = {"Travis Scott", "21 Savage", "Migos", "Gucci Mane", "Blackbear"};
    std::vector<std::string> edmBands = {"Avicii", "Martin Garrix", "Kygo", "Daft Punk", "David Guetta"};
        
    BandsMap["rock"] = rockBands;
    BandsMap["pop"] = popBands;
    BandsMap["trap"] = trapBands;
    BandsMap["edm"] = edmBands;

    std::cout << "Welcome to BandAI (Trademark)!\n------------------------------\nWrite your preffered genre (rock, pop, trap, edm): ";
    std::cin >> genre;

    std::cout << "------------------------------\n";

    std::transform(genre.begin(), genre.end(), genre.begin(), ::tolower);

    if (genre == "rock") { for (auto i = BandsMap["rock"].begin(); i != BandsMap["rock"].end(); i++) { std::cout << *i << "\n"; } }
    else if (genre == "pop") { for (auto i = BandsMap["pop"].begin(); i != BandsMap["pop"].end(); i++) { std::cout << *i << "\n"; } }
    else if (genre == "trap") { for (auto i = BandsMap["trap"].begin(); i != BandsMap["trap"].end(); i++) { std::cout << *i << "\n"; } }
    else if (genre == "edm") { for (auto i = BandsMap["edm"].begin(); i != BandsMap["edm"].end(); i++) { std::cout << *i << "\n"; } }
    else { std::cout << "Invalid genre. Please run the program again."; }

    return 0;
}