#ifndef FLAC_PLAYER_HPP
#define FLAC_PLAYER_HPP

#include <string>

class FlacPlayer {
public:
    FlacPlayer();
    ~FlacPlayer();
    void playFlac(const std::string& fileName);
};

#endif // FLAC_PLAYER_HPP
