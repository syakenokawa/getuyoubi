

#pragma once

#include "Player.h"

class PlayerActionManager
{
public:
    static void Execute(
        PlayerAction action,
        Player& player,
        Character& enemy
    );
};