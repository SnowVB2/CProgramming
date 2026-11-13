#include <iostream>
#include <string>
class Character {
    public:
    std::string name;
    int health;
    virtual void printInfo() const;

    Character(const std::string& name, int health);
    ~Character();

    private:
};

class Warrior : public Character {
    public:
    int armor;
    void printInfo() const;

    Warrior(const std::string& name, int health, int armor);
    ~Warrior();

    private:
};

class EliteWarrior : public Warrior {
    public:
    int level;
    void printInfo() const;

    EliteWarrior(const std::string& name, int health, int armor, int level);
    ~EliteWarrior();

    private:
};


int main(void) {
    // Create a Character object dynamically
    Character* character = new Character("John", 50);

    // Set characters name and health
    character->name = "Gilbert";
    character->health = 1;
    character->printInfo();

    // Create a Warrior
    Warrior warrior("Arthur", 100, 50);
    warrior.name = "John (aka The Warrior)";
    warrior.health = 100;
    warrior.armor = 50;
    warrior.printInfo();

    // Create Elite Warrior
    EliteWarrior ew("Hercules", 80, 68, 5);
    Character* c = &ew;

    // Create array of pointers to Characters
    Character* Characters[3] = {character, &warrior, &ew};

    for (int i = 0; i < 3; i++) {
        Characters[i]->printInfo();
    }

    delete character;
    return 0;
}


void Character::printInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
}

void Warrior::printInfo() const {
    // Call the base class method
    Character::printInfo();
    std::cout << "Armor: " << armor << std::endl;
}

Character::Character(const std::string& name, int health)
    : name(name) , health(health) {
    std::cout << "Character Constructor" << std::endl;
}

Warrior::Warrior(const std::string& name, int health, int armor) 
    : Character(name, health), armor(armor) {
    std::cout << "Warrior Constructor" << std::endl;
}

Character::~Character() {
    std::cout << "Character Destructor" << std::endl;
}

Warrior::~Warrior() {
    std::cout << "Warrior Destructor" << std::endl;
}

EliteWarrior::EliteWarrior( const std::string& name,
                            int health,
                            int armor,
                            int level)
    : Warrior(name, health, armor), level(level) {

}

EliteWarrior::~EliteWarrior() {
    std::cout << "EliteWarrior Destructor" << std::endl;
}

void EliteWarrior::printInfo() const {
    // Call the base class method
    Warrior::printInfo();
    std::cout << "Level: " << level << std::endl;
}