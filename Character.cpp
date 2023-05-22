#include "Character.h"

Character::Character() {}

Character::Character(const std::string& characterName, const Pokemon& characterPokemon)
    : name(characterName), pokemon(characterPokemon) {}

std::string Character::getName() const {
    return name;
}

void Character::setName(const std::string& characterName) {
    name = characterName;
}

Pokemon Character::getPokemon() const {
    return pokemon;
}

void Character::setPokemon(const Pokemon& characterPokemon) {
    pokemon = characterPokemon;
}
