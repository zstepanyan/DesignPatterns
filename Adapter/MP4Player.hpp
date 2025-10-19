#ifndef MP4_PLAYER_HPP
#define MP4_PLAYER_HPP

#include <string>

class Mp4Player {
public:
    Mp4Player();
    ~Mp4Player();
    void playMp4(const std::string& fileName);
};

#endif // MP4_PLAYER_HPP
