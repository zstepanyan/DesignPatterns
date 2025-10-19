#ifndef VLC_PLAYER_HPP
#define VLC_PLAYER_HPP

#include <string>

class VlcPlayer {
public:
    VlcPlayer();
    ~VlcPlayer();
    void playVlc(const std::string& fileName);
};

#endif // VLC_PLAYER_HPP
