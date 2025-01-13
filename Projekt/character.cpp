#include "Character.h"
#include <iostream>

Character::Character(std::string n) {
    name = n;
    health = 100;
    damage = 10;
    cash = 0;
}

void Character::displayStats() {
    std::cout << "Imi�: " << name << std::endl;
    std::cout << "Zdrowie: " << health << std::endl;
    std::cout << "Obra�enia: " << damage << std::endl;
    std::cout << "Pieni�dze: " << cash << " z�ota" << std::endl;
}

void Character::attack(Monster& monster) {
    monster.health -= damage;
    std::cout << name << " atakuje " << monster.type << " za " << damage << " obra�e�!" << std::endl;
}
