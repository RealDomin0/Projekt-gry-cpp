#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "Character.h"
#include "Shop.h"
#include "Monster.h"
#include "randomEvent.h"
#include <locale.h>

void clearScreen() {
    // Funkcja czyszcz¹ca ekran
    std::system("CLS");
}

int main() {

    setlocale(LC_CTYPE, "Polish");

    std::string playerName;
    std::cout << "WprowadŸ nazwê swojej postaci: ";
    std::getline(std::cin, playerName);
    Character player(playerName);
    Shop shop;

    bool gameRunning = true;
    int turns = 0;

    while (gameRunning) {
        clearScreen();

        // Wyœwietlamy dzieñ/turê
        std::cout << "Dzieñ " << turns + 1 << std::endl;

        // Wyœwietlamy menu
        std::cout << "\nCo chcesz zrobiæ?" << std::endl;
        std::cout << "1. Udaj siê na wyprawê (Losowe zdarzenie)" << std::endl;
        std::cout << "2. OdwiedŸ sklep" << std::endl;
        std::cout << "3. Zobacz statystyki" << std::endl;
        std::cout << "4. WyjdŸ z gry" << std::endl;
        std::cout << "WprowadŸ swój wybór: ";

        int choice;
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
        case 1:
            // Gracz idzie na przygodê, wywo³ujemy losowe zdarzenie
            randomEvent(player, shop);
            turns++;
            break;

        case 2:
            // Gracz wchodzi do sklepu
            shop.enterShop(player);
            break;

        case 3:
            // Gracz chce zobaczyæ swoje statystyki
            player.displayStats();
            std::cout << "\nKliknij losowy przycisk, aby kontynuowaæ...";
            std::cin.get();
            break;

        case 4:
            // Gracz koñczy grê
            std::cout << "Dziêkujê za grê!" << std::endl;
            gameRunning = false;
            break;

        default:
            std::cout << "Nieznany wybór. Spróbuj ponownie" << std::endl;
            break;
        }

        // Sprawdzamy, czy gracz osi¹gn¹³ cel (po 10 turach)
        if (turns >= 10) {
            std::cout << "Gratulacjê uda³o Ci siê dojœæ do celu!" << std::endl;
            gameRunning = false;
        }

        // Sprawdzamy, czy gracz ma 0 zdrowia
        if (player.health <= 0) {
            std::cout << "Zosta³eœ pokonany." << std::endl;
            gameRunning = false;
        }
    }

    return 0;
}
