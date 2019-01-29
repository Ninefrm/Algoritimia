#include "Album.h"

void Album::addSong(){
  std::stringstream Temp;
    std::string Name, Author, Artist, Year, Tmp;
    std::cout<<CtS<<std::endl;

    std::ofstream Write("Album.txt", std::ios::app);
    std::cout<<"Name: ";
    getline(std::cin,Name);
    std::cout<<"Author Name: ";
    getline(std::cin,Author);
    std::cout<<"Artist Name: ";
    getline(std::cin,Artist);
    std::cout<<"Year: ";
    getline(std::cin, Year);
    A.aSongName(Name);
    A.aAuthor(Author);
    A.aArtist(Artist);
    A.aYear(Year);
    Temp<<CtS;
    Temp>>Tmp;
    A.addID(Tmp);

  Write<<A.sSongName()<<"#"<<A.sID()<<"#"<<A.sAuthor()<<"#"<<A.sArtist()<<"#"<<A.sYear()<<'\n';
  CtS++;
}

void Album::deleteSong(std::string S){
  std::string Tmp;
  int W=1;
  std::ofstream File("tmp.txt", std::ios::app);
  std::ifstream Read("Album.txt");
  while(!Read.eof()){
    getline(Read,Tmp,'#');
    A.aSongName(Tmp);

    getline(Read,Tmp,'#');
    A.addID(Tmp);

    getline(Read,Tmp,'#');
    A.aAuthor(Tmp);

    getline(Read,Tmp,'#');
    A.aArtist(Tmp);

    getline(Read,Tmp,'\n');
    A.aYear(Tmp);
    if(Read.eof())break;
    if(S != A.sSongName()){
      File<<A.sSongName()<<"#"<<A.sID()<<"#"<<A.sAuthor()<<"#"<<A.sArtist()<<"#"<<A.sYear()<<'\n';
    }
  }Read.close(); File.close();
    remove("Album.txt");
  rename("tmp.txt","Album.txt");
}

void Album::editSong(std::string S){
  std::string Tmp;
    int W=1;
    int OP;
    std::ofstream File("tmp.txt", std::ios::app);
    std::ifstream Read("Album.txt");
      while(!Read.eof()){
        getline(Read,Tmp,'#');
        A.aSongName(Tmp);

        getline(Read,Tmp,'#');
        A.addID(Tmp);

        getline(Read,Tmp,'#');
        A.aAuthor(Tmp);

        getline(Read,Tmp,'#');
        A.aArtist(Tmp);

        getline(Read,Tmp,'\n');
        A.aYear(Tmp);
        if(Read.eof())break;
        if(S == A.sSongName()){
          while(W){
            std::cout<<"Edit: "<<std::endl;
            std::cout<<"1.Name"<<std::endl;
            std::cout<<"2.Author"<<std::endl;
            std::cout<<"3.Artist"<<std::endl;
            std::cout<<"4.Year"<<std::endl;

            std::cin>>OP;
            std::cin.ignore();
            switch (OP) {
              case 1:

                std::cout<<"Name: "<<std::endl;
                getline(std::cin, Tmp);
                  A.aSongName(Tmp);

              break;
              case 2:
                std::cout<<"Author:"<<std::endl;
                getline(std::cin, Tmp);
                  A.aAuthor(Tmp);
              break;
              case 3:

                std::cout<<"Artist:"<<std::endl;
                getline(std::cin, Tmp);
                  A.aArtist(Tmp);

              break;
              case 4:
              std::cout<<"Year:"<<std::endl;
              getline(std::cin, Tmp);
                A.aYear(Tmp);
              break;

              default:
              W=0;
              break;
            }
        }
      }
      File<<A.sSongName()<<"#"<<A.sID()<<"#"<<A.sAuthor()<<"#"<<A.sArtist()<<"#"<<A.sYear()<<'\n';
    }Read.close(); File.close();
      remove("Album.txt");
  rename("tmp.txt","Album.txt");
}

void Album::showSongs(){
  std::string Tmp;
  std::ifstream Read("Album.txt");
  if(!Read.good())
    std::cout<<"Error";
  else
  std::cout<<"NAME    "<<"#  "<<"AUTHOR   "<<"ARTIST              "<<"YEAR        "<<std::endl;
    while(!Read.eof()){
      getline(Read,Tmp,'#');
      A.aSongName(Tmp);

      getline(Read,Tmp,'#');
      A.addID(Tmp);

      getline(Read,Tmp,'#');
      A.aAuthor(Tmp);

      getline(Read,Tmp,'#');
      A.aArtist(Tmp);

      getline(Read,Tmp,'\n');
      A.aYear(Tmp);

      if(Read.eof())break;
        std::cout<<A.sSongName()<<" "<<A.sID()<<" "<<A.sAuthor()<<" "<<A.sArtist()<<" "<<A.sYear()<<std::endl;
    }Read.close();
}
