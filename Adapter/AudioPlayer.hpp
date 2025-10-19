#ifndef AUDIO_PLAYER_HPP
#define AUDIO_PLAYER_HPP

#include "MediaPlayer.hpp"
#include "Mp3Player.hpp"
#include "MediaAdapter.hpp"
#include <string>

class AudioPlayer : public MediaPlayer {
private:
    Mp3Player mp3Player;
    MediaAdapter* mediaAdapter;

public:
    AudioPlayer();
    ~AudioPlayer();
    void play(const std::string& audioType, const std::string& fileName) override;
};

#endif // AUDIO_PLAYER_HPP
