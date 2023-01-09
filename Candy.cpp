#include "Candy.h"

// This project made by Asaf Zafrir (205929029)

//---        Candy.cpp          ---//

Candy::Candy(string name, Rarity rarity, CapsuleType type, string flavor, string color) : Capsule(name, rarity, type, color), Edible(flavor) {}