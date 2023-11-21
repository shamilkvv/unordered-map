#include <iostream>
#include <unordered_map>

bool MakeupWord(const std::string& randomLetter, const std::string& paper) {
    std::unordered_map<char, int> letterCount;

    for (auto c : paper) {
        letterCount[c]++;
    }