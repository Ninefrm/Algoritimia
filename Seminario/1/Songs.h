#ifndef _SONGS_H_
#define _SONGS_H_
#include <fstream>
#include <string>
#include <iostream>
#include <string>

class Songs{
  private:
    std::string SongName;
    std::string Author;
    std::string Artist;
    std::string Year;
    std::string ID;
  public:
    void aSongName(std::string &S);
    void aAuthor(std::string &S);
    void aArtist(std::string &S);
    void aYear(std::string &S);
    void addID(std::string &S);
    std::string sSongName();
    std::string sAuthor();
    std::string sArtist();
    std::string sYear();
    std::string sID();
};

#endif
