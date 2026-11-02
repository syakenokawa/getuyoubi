#pragma once

#include "Character.h"
#include "Config.h"

enum class PlayerAction
{
    Attack,
    Defense,
    Heal
};

class Player : public Character
{
public:
    Player();

    PlayerAction SelectAction() const;
};