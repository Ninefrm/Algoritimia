#include <iostream>
#include "Album.h"

int main(int argc, char const *argv[]) {
  Album A;
  int W = 1;
  int OP;
  std::string Tmp;
  while(W){
    std::cout<<"1.- ADD SONG."<<std::endl;
    std::cout<<"2.- SHOW SONGS."<<std::endl;
    std::cout<<"3.- EDIT SONG."<<std::endl;
    std::cout<<"4.- DELETE SONG."<<std::endl;
    std::cout<<"6.- EXIT."<<std::endl;
    std::cin>>OP;
    std::cin.ignore();
    switch ( OP) {
      case 1:
        A.addSong();
        break;

      case 2:
        A.showSongs();
        break;

      case 3:
      std::cout<<"Name: "<<std::endl;
        getline(std::cin, Tmp);
        A.editSong(Tmp);
        break;

      case 4:
      std::cout<<"Name: "<<std::endl;
        getline(std::cin, Tmp);
        A.deleteSong(Tmp);
        break;

      default:
      W=0;
      break;
    }
  }
  return 0;
}
