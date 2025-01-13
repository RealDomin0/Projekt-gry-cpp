#ifndef MONSTER_H
#define MONSTER_H

// Deklaracja wstêpna klasy Character (forward declaration)
class Character;

#include <string>

class Monster {
protected:
    std::string type;
    int health;
    int damage;
public:
    virtual void encounter(Character& player) = 0;
    friend class Character;
    virtual ~Monster() {}
};

class Spider : public Monster {
public:
    Spider();
    void encounter(Character& player) override;
};

class Ghoul : public Monster {
public:
    Ghoul();
    void encounter(Character& player) override;
};

class Ghost : public Monster {
public:
    Ghost();
    void encounter(Character& player) override;
};

#endif // MONSTER_H
