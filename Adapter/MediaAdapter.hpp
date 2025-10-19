#ifndef MEDIA_ADAPTER_HPP
#define MEDIA_ADAPTER_HPP

#include "MediaPlayer.hpp"
#include "Mp4Player.hpp"
#include "VlcPlayer.hpp"
#include "FlacPlayer.hpp"
#include <string>

class MediaAdapter : public MediaPlayer {
private:
    Mp4Player* mp4Player;
    VlcPlayer* vlcPlayer;
    FlacPlayer* flacPlayer;
    std::string audioType;

public:
    MediaAdapter(const std::string& audioType);
    ~MediaAdapter();
    void play(const std::string& audioType, const std::string& fileName) override;
};

#endif // MEDIA_ADAPTER_HPP
