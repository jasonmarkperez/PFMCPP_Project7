#include "Paladin.h"
#include <string>  
#include <random>
#include "Utility.h"

Paladin::Paladin(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 80), name(name_){
    helpfulItems = makeHelpfulItems(rand() % 10);
    defensiveItems = makeDefensiveItems(rand() % 10);
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
