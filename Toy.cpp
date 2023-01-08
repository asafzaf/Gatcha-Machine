#include "Toy.h"

// This project made by Asaf Zafrir (205929029)

//---        Toy.cpp          ---//

Toy::Toy(string name, Rarity rarity, CapsuleType type, Series theme) : Capsule(name, rarity, type), Figure(theme) {}