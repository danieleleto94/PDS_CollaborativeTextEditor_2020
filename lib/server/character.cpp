//
// Created by daniele on 14/10/19.
//

#include "character.h"

character::character() : real_character(0) {};

int character::getReal_character() {
    return real_character;
}

std::vector<int>& character::getPosition() {
    return position;
}

