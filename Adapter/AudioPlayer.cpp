#include "AudioPlayer.hpp"

AudioPlayer::AudioPlayer() : mediaAdapter(nullptr) {}

AudioPlayer::~AudioPlayer() {
    delete mediaAdapter;
}

void AudioPlayer::play(const std::string& audioType, const std::string& fileName) {
    if (audioType == "mp3") {
        mp3Player.play(audioType, fileName);
    } 
    else if (audioType == "mp4" || audioType == "vlc" || audioType == "flac") {
        delete mediaAdapter;  // Clean previous adapter if any
        mediaAdapter = new MediaAdapter(audioType);
        mediaAdapter->play(audioType, fileName);
    } 
    else {
        std::cout << "Invalid media format: " << audioType << std::endl;
    }
}
