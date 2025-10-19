#ifndef MEDIA_PLAYER_HPP
#define MEDIA_PLAYER_HPP

#include <string>

class MediaPlayer {
public:
    virtual ~MediaPlayer() = default;
    virtual void play(const std::string& audioType, const std::string& fileName) = 0;
};

#endif // MEDIA_PLAYER_HPP
