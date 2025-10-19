#include "Mp3Player.hpp"
#include <iostream>

Mp3Player::Mp3Player() {}

Mp3Player::~Mp3Player() {}

void Mp3Player::play(const std::string& audioType, const std::string& fileName) {
    if (audioType == "mp3") {
        std::cout << "Playing mp3 file. Name: " << fileName << std::endl;
    } 
    else {
        std::cout << "Mp3Player can only play mp3 files." << std::endl;
    }
}
