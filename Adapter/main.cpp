#include "AudioPlayer.hpp"
#include <iostream>

int main() {
    AudioPlayer player;

    player.play("mp3", "song.mp3");
    player.play("mp4", "video.mp4");
    player.play("vlc", "movie.vlc");
    player.play("flac", "audio.flac");
    player.play("avi", "unsupported.avi"); // unsupported format

    return 0;
}
