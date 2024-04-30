#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(std::string name_, int hp, int armor_) : Character(hp, armor_, 10),
name(name_)
{
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
