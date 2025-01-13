#include "randomEvent.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

void randomEvent(Character& player, Shop& shop) {
    // Inicjalizujemy generator liczb losowych
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Losujemy jedno z trzech zdarzeñ
    int event = std::rand() % 3;

    switch (event) {
    case 0: {
        // Spotkanie z potworem
        std::cout << "Pojawi³ siê losowy potwór!" << std::endl;
        int monsterType = std::rand() % 3; 

        Monster* monster = nullptr;

        if (monsterType == 0) {
            monster = new Spider();
        }
        else if (monsterType == 1) {
            monster = new Ghoul();
        }
        else {
            monster = new Ghost();
        }

        // Gracz walczy z potworem
        monster->encounter(player);

        delete monster;
        break;
    }

    case 1: {
        // Gracz znajduje z³oto
        int goldFound = std::rand() % 50 + 10; 
        player.cash += goldFound;
        std::cout << "Znalaz³eœ " << goldFound << " z³ota!" << std::endl;
        break;
    }

    case 2: {
        // Nic siê nie dzieje
        std::cout << "Nic siê nie wydarzy³o..." << std::endl;
        break;
    }

    default:
        break;
    }

    std::cout << "\nNaciœnij dowolny przycisk...";
    std::cin.get(); 
}
