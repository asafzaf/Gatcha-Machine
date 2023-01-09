#include "Toy.h"

// This project made by Asaf Zafrir (205929029)

//---        Toy.cpp          ---//

Toy::Toy(string name, Rarity rarity, CapsuleType type, Series theme, string color) : Capsule(name, rarity, type, color), Figure(theme) {}