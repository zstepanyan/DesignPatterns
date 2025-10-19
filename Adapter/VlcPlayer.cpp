#include "VlcPlayer.hpp"
#include <iostream>

VlcPlayer::VlcPlayer() {}

VlcPlayer::~VlcPlayer() {}

void VlcPlayer::playVlc(const std::string& fileName) {
    std::cout << "Playing vlc file. Name: " << fileName << std::endl;
}
