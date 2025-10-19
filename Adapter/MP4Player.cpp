#include "Mp4Player.hpp"
#include <iostream>

Mp4Player::Mp4Player() {}

Mp4Player::~Mp4Player() {}

void Mp4Player::playMp4(const std::string& fileName) {
    std::cout << "Playing mp4 file. Name: " << fileName << std::endl;
}
