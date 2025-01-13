#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "Monster.h"

class Character {
public:
    std::string name;
    int health;
    int damage;
    int cash;
    Character(std::string n);
    void displayStats();
    void attack(Monster& monster);
};

#endif
