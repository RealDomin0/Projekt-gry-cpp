#include "Shop.h"
#include <iostream>
#include <locale.h>

void Shop::enterShop(Character& player) {
    int choice;
    std::cout << "\nWitaj w sklepie co chcesz kupi�?\n";
    std::cout << "1. Bro� (+10 ataku) - 50 z�ota\n";
    std::cout << "2. Pancerz (+30 zdrowia) - 75 z�ota\n";
    std::cout << "3. Mikstura lecz�ca (+50 zdrowia) - 30 z�ota\n";
    std::cout << "4. Opu�� sklep\n";
    std::cout << "Tw�j wyb�r: ";
    std::cin >> choice;

    if (choice == 1) {
        if (player.cash >= 50) {
            player.damage += 10;
            player.cash -= 50;
            std::cout << "Kupi�e� bro�.Twoje obra�enia wynosz�: " << player.damage << std::endl;
        }
        else {
            std::cout << "Brak z�ota!" << std::endl;
        }
    }
    else if (choice == 2) {
        if (player.cash >= 75) {
            player.health += 30;
            player.cash -= 75;
            std::cout << "Kupi�e� pancerz! Twoje zdrowie wynosi: " << player.health << std::endl;
        }
        else {
            std::cout << "Brak z�ota!" << std::endl;
        }
    }
    else if (choice == 3) {
        if (player.cash >= 30) {
            player.health += 50;
            player.cash -= 30;
            std::cout << "Kupi�e� mikstur� lecz�c�! Twoje zdrowie wynosi: " << player.health << std::endl;
        }
        else {
            std::cout << "Brak z�ota!" << std::endl;
        }
    }
    else {
        std::cout << "Wyszed�e� ze sklepu.\n";
    }
}
