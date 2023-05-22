#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "Pokemon.h" 

class Character {
private:
    std::string name;
    Pokemon pokemon; 

public:
    Character();
    Character(const std::string& characterName, const Pokemon& characterPokemon);

    std::string getName() const;
    void setName(const std::string& characterName);

    Pokemon getPokemon() const;
    void setPokemon(const Pokemon& characterPokemon);
};

#endif 
