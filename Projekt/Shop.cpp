#include "Shop.h"
#include <iostream>
#include <locale.h>

void Shop::enterShop(Character& player) {
    int choice;
    std::cout << "\nWitaj w sklepie co chcesz kupiæ?\n";
    std::cout << "1. Broñ (+10 ataku) - 50 z³ota\n";
    std::cout << "2. Pancerz (+30 zdrowia) - 75 z³ota\n";
    std::cout << "3. Mikstura lecz¹ca (+50 zdrowia) - 30 z³ota\n";
    std::cout << "4. Opuœæ sklep\n";
    std::cout << "Twój wybór: ";
    std::cin >> choice;

    if (choice == 1) {
        if (player.cash >= 50) {
            player.damage += 10;
            player.cash -= 50;
            std::cout << "Kupi³eœ broñ.Twoje obra¿enia wynosz¹: " << player.damage << std::endl;
        }
        else {
            std::cout << "Brak z³ota!" << std::endl;
        }
    }
    else if (choice == 2) {
        if (player.cash >= 75) {
            player.health += 30;
            player.cash -= 75;
            std::cout << "Kupi³eœ pancerz! Twoje zdrowie wynosi: " << player.health << std::endl;
        }
        else {
            std::cout << "Brak z³ota!" << std::endl;
        }
    }
    else if (choice == 3) {
        if (player.cash >= 30) {
            player.health += 50;
            player.cash -= 30;
            std::cout << "Kupi³eœ miksturê lecz¹c¹! Twoje zdrowie wynosi: " << player.health << std::endl;
        }
        else {
            std::cout << "Brak z³ota!" << std::endl;
        }
    }
    else {
        std::cout << "Wyszed³eœ ze sklepu.\n";
    }
}
