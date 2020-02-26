#include "DragonSlayer.h"
#include "Dragon.h"
#include <cassert>
#include <random>
#include "Utility.h"

DragonSlayer::DragonSlayer(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 4), name(name_) {
    helpfulItems = makeHelpfulItems(rand() % 10);
    defensiveItems = makeDefensiveItems(rand() % 10);
}

const std::string& DragonSlayer::getName()
{
    return name;
}

std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {        
        attackItem.use(&other);
        
        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
}
