#include "Songs.h"

void Songs::aSongName(std::string &S){
  SongName = S;
}

void Songs::aAuthor(std::string &S){
  Author = S;
}

void Songs::aArtist(std::string &S){
  Artist = S;
}

void Songs::aYear(std::string &S){
    Year = S;
}

void Songs::addID(std::string &S){
  ID = S;
}

std::string Songs::sSongName(){
  return SongName;
}

std::string Songs::sAuthor(){
  return Author;
}

std::string Songs::sArtist(){
  return Artist;
}

std::string Songs::sYear(){
  return Year;
}

std::string Songs::sID(){
  return ID;
}
