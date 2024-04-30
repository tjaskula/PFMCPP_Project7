#pragma once

#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name_, int hp, int armor_);

    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
