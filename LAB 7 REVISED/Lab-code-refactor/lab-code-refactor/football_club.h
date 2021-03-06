#include <iostream>

using namespace std;

#include "player.h"

class FootballClub{
private:

    string clubname;
    string district;
    string stripColour;
    string Theteammanager;   // added for q3

    // const static int , way to make a constant variable in a class
    const static int MAXSQUAD = 23;
  //  const static int MAXTEAM = 15; // This has been removed as per q2.
    Player squad[MAXSQUAD];
 //  Player team[MAXTEAM]; // This has been removed as per q2.



public:


    //contructor
    FootballClub();
    FootballClub(string clubname, string district, string Theteammanager);

    string getClubname();
    string getDistrict();
    string getTheteammanager();

    void setClubname(string clubname);
    void setDistrictname(string district);
    void setTheteammanager(string Theteammanager);
    void printInfo();


    void addPlayerToSquad(Player tmp, int position);
   // void addPlayerToTeam(Player tempPlayer,int ID);

    void printTeam();
    void printSquad();
};


