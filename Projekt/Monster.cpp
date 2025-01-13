#include "Monster.h"
#include "Character.h" 
#include <iostream>

Spider::Spider() {
    type = "Paj¹k";
    health = 30;
    damage = 10;
}

void Spider::encounter(Character& player) {
    std::cout << "Spotka³eœ:" << type << "!" << std::endl;
    std::cout << "Posiada on: " << health << " punktów zdrowia oraz " << damage << " punktów obra¿eñ." << std::endl;

    while (health > 0 && player.health > 0) {
        player.attack(*this);
        if (health > 0) {
            player.health -= damage;
            std::cout << type << " zaatakowa³ ciê zadj¹c: " << damage << " obra¿eñ!" << std::endl;
        }
        std::cout << "Twoje zdrowie wynosi: " << player.health << std::endl;
        std::cout << "Zdrowie " << type << " wynosi " << health << std::endl;

        if (player.health <= 0) {
            std::cout << "Zosta³eœ pokonany przez: " << type << "!" << std::endl;
            break;
        }
        else if (health <= 0) {
            std::cout << "Pokona³eœ: " << type << "!" << std::endl;
            int goldFound = std::rand() % 11 + 10;
            player.cash += goldFound;
            std::cout << "Otrzymujesz " << goldFound << " z³ota!" << std::endl;
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
    std::cout << "Spotka³eœ:" << type << "!" << std::endl;
    std::cout << "Posiada on: " << health << " punktów zdrowia oraz " << damage << " punktów obra¿eñ." << std::endl;

    while (health > 0 && player.health > 0) {
        player.attack(*this);
        if (health > 0) {
            player.health -= damage;
            std::cout << type << " zaatakowa³ ciê zadj¹c: " << damage << " obra¿eñ!" << std::endl;
        }
        std::cout << "Twoje zdrowie wynosi: " << player.health << std::endl;
        std::cout << "Zdrowie " << type << " wynosi " << health << std::endl;

        if (player.health <= 0) {
            std::cout << "Zosta³eœ pokonany przez: " << type << "!" << std::endl;
            break;
        }
        else if (health <= 0) {
            std::cout << "Pokona³eœ: " << type << "!" << std::endl;
            int goldFound = std::rand() % 11 + 30;
            player.cash += goldFound;
            std::cout << "Otrzymujesz " << goldFound << " z³ota!" << std::endl;
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
    std::cout << "Spotka³eœ:" << type << "!" << std::endl;
    std::cout << "Posiada on: " << health << " punktów zdrowia oraz " << damage << " punktów obra¿eñ." << std::endl;

    while (health > 0 && player.health > 0) {
        player.attack(*this);
        if (health > 0) {
            player.health -= damage;
            std::cout << type << " zaatakowa³ ciê zadj¹c: " << damage << " obra¿eñ!" << std::endl;
        }
        std::cout << "Twoje zdrowie wynosi: " << player.health << std::endl;
        std::cout << "Zdrowie " << type << " wynosi " << health << std::endl;

        if (player.health <= 0) {
            std::cout << "Zosta³eœ pokonany przez: " << type << "!" << std::endl;
            break;
        }
        else if (health <= 0) {
            std::cout << "Pokona³eœ: " << type << "!" << std::endl;
            int goldFound = std::rand() % 11 + 20;
            player.cash += goldFound;
            std::cout << "Otrzymujesz " << goldFound << " z³ota!" << std::endl;
            break;
        }
    }
}
