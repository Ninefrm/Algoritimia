#ifndef _ALBUM_H_
#define _ALBUM_H_
#include "Songs.h"
#include <cstdlib>
#include <sstream>

class Album{
  private:
    Songs A;
    std::string Cout;
    int CtS = 0;
  public:
    void addSong();
    void deleteSong(std::string S);
    void editSong(std::string S);
    void showSongs();
};

#endif
