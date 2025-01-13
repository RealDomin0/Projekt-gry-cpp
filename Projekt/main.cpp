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
    // Funkcja czyszcz�ca ekran
    std::system("CLS");
}

int main() {

    setlocale(LC_CTYPE, "Polish");

    std::string playerName;
    std::cout << "Wprowad� nazw� swojej postaci: ";
    std::getline(std::cin, playerName);
    Character player(playerName);
    Shop shop;

    bool gameRunning = true;
    int turns = 0;

    while (gameRunning) {
        clearScreen();

        // Wy�wietlamy dzie�/tur�
        std::cout << "Dzie� " << turns + 1 << std::endl;

        // Wy�wietlamy menu
        std::cout << "\nCo chcesz zrobi�?" << std::endl;
        std::cout << "1. Udaj si� na wypraw� (Losowe zdarzenie)" << std::endl;
        std::cout << "2. Odwied� sklep" << std::endl;
        std::cout << "3. Zobacz statystyki" << std::endl;
        std::cout << "4. Wyjd� z gry" << std::endl;
        std::cout << "Wprowad� sw�j wyb�r: ";

        int choice;
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
        case 1:
            // Gracz idzie na przygod�, wywo�ujemy losowe zdarzenie
            randomEvent(player, shop);
            turns++;
            break;

        case 2:
            // Gracz wchodzi do sklepu
            shop.enterShop(player);
            break;

        case 3:
            // Gracz chce zobaczy� swoje statystyki
            player.displayStats();
            std::cout << "\nKliknij losowy przycisk, aby kontynuowa�...";
            std::cin.get();
            break;

        case 4:
            // Gracz ko�czy gr�
            std::cout << "Dzi�kuj� za gr�!" << std::endl;
            gameRunning = false;
            break;

        default:
            std::cout << "Nieznany wyb�r. Spr�buj ponownie" << std::endl;
            break;
        }

        // Sprawdzamy, czy gracz osi�gn�� cel (po 10 turach)
        if (turns >= 10) {
            std::cout << "Gratulacj� uda�o Ci si� doj�� do celu!" << std::endl;
            gameRunning = false;
        }

        // Sprawdzamy, czy gracz ma 0 zdrowia
        if (player.health <= 0) {
            std::cout << "Zosta�e� pokonany." << std::endl;
            gameRunning = false;
        }
    }

    return 0;
}
