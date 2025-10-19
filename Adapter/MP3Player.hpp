#ifndef MP3_PLAYER_HPP
#define MP3_PLAYER_HPP

#include "MediaPlayer.hpp"

class Mp3Player : public MediaPlayer {
public:
    Mp3Player();
    ~Mp3Player();
    void play(const std::string& audioType, const std::string& fileName) override;
};

#endif // MP3_PLAYER_HPP
