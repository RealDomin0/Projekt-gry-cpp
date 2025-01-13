#include "Monster.h"
#include "Character.h" 
#include <iostream>

Spider::Spider() {
    type = "Paj�k";
    health = 30;
    damage = 10;
}

void Spider::encounter(Character& player) {
    std::cout << "Spotka�e�:" << type << "!" << std::endl;
    std::cout << "Posiada on: " << health << " punkt�w zdrowia oraz " << damage << " punkt�w obra�e�." << std::endl;

    while (health > 0 && player.health > 0) {
        player.attack(*this);
        if (health > 0) {
            player.health -= damage;
            std::cout << type << " zaatakowa� ci� zadj�c: " << damage << " obra�e�!" << std::endl;
        }
        std::cout << "Twoje zdrowie wynosi: " << player.health << std::endl;
        std::cout << "Zdrowie " << type << " wynosi " << health << std::endl;

        if (player.health <= 0) {
            std::cout << "Zosta�e� pokonany przez: " << type << "!" << std::endl;
            break;
        }
        else if (health <= 0) {
            std::cout << "Pokona�e�: " << type << "!" << std::endl;
            int goldFound = std::rand() % 11 + 10;
            player.cash += goldFound;
            std::cout << "Otrzymujesz " << goldFound << " z�ota!" << std::endl;
            break;
        }
    }
}

Ghoul::Ghoul() {
    type = "Ghoul";
    health = 50;
    damage = 15;
}

void Ghoul::encounter(Character& player) {
    std::cout << "Spotka�e�:" << type << "!" << std::endl;
    std::cout << "Posiada on: " << health << " punkt�w zdrowia oraz " << damage << " punkt�w obra�e�." << std::endl;

    while (health > 0 && player.health > 0) {
        player.attack(*this);
        if (health > 0) {
            player.health -= damage;
            std::cout << type << " zaatakowa� ci� zadj�c: " << damage << " obra�e�!" << std::endl;
        }
        std::cout << "Twoje zdrowie wynosi: " << player.health << std::endl;
        std::cout << "Zdrowie " << type << " wynosi " << health << std::endl;

        if (player.health <= 0) {
            std::cout << "Zosta�e� pokonany przez: " << type << "!" << std::endl;
            break;
        }
        else if (health <= 0) {
            std::cout << "Pokona�e�: " << type << "!" << std::endl;
            int goldFound = std::rand() % 11 + 30;
            player.cash += goldFound;
            std::cout << "Otrzymujesz " << goldFound << " z�ota!" << std::endl;
            break;
        }
    }
}

Ghost::Ghost() {
    type = "Duch";
    health = 40;
    damage = 12;
}

void Ghost::encounter(Character& player) {
    std::cout << "Spotka�e�:" << type << "!" << std::endl;
    std::cout << "Posiada on: " << health << " punkt�w zdrowia oraz " << damage << " punkt�w obra�e�." << std::endl;

    while (health > 0 && player.health > 0) {
        player.attack(*this);
        if (health > 0) {
            player.health -= damage;
            std::cout << type << " zaatakowa� ci� zadj�c: " << damage << " obra�e�!" << std::endl;
        }
        std::cout << "Twoje zdrowie wynosi: " << player.health << std::endl;
        std::cout << "Zdrowie " << type << " wynosi " << health << std::endl;

        if (player.health <= 0) {
            std::cout << "Zosta�e� pokonany przez: " << type << "!" << std::endl;
            break;
        }
        else if (health <= 0) {
            std::cout << "Pokona�e�: " << type << "!" << std::endl;
            int goldFound = std::rand() % 11 + 20;
            player.cash += goldFound;
            std::cout << "Otrzymujesz " << goldFound << " z�ota!" << std::endl;
            break;
        }
    }
}
