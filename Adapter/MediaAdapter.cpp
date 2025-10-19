#include "MediaAdapter.hpp"

MediaAdapter::MediaAdapter(const std::string& audioType) : audioType(audioType) {
    mp4Player = nullptr;
    vlcPlayer = nullptr;
    flacPlayer = nullptr;

    if (audioType == "mp4") {
        mp4Player = new Mp4Player();
    } 
    else if (audioType == "vlc") {
        vlcPlayer = new VlcPlayer();
    } 
    else if (audioType == "flac") {
        flacPlayer = new FlacPlayer();
    }
}

MediaAdapter::~MediaAdapter() {
    delete mp4Player;
    delete vlcPlayer;
    delete flacPlayer;
}

void MediaAdapter::play(const std::string& audioType, const std::string& fileName) {
    if (audioType == "mp4" && mp4Player) {
        mp4Player->playMp4(fileName);
    } 
    else if (audioType == "vlc" && vlcPlayer) {
        vlcPlayer->playVlc(fileName);
    } 
    else if (audioType == "flac" && flacPlayer) {
        flacPlayer->playFlac(fileName);
    } 
    else {
        std::cout << "Unsupported format: " << audioType << std::endl;
    }
}
