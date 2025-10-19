#include "FlacPlayer.hpp"
#include <iostream>

FlacPlayer::FlacPlayer() {}

FlacPlayer::~FlacPlayer() {}

void FlacPlayer::playFlac(const std::string& fileName) {
    std::cout << "Playing flac file. Name: " << fileName << std::endl;
}
