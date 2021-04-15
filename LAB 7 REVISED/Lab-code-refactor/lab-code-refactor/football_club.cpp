#include"football_club.h"

    FootballClub::FootballClub(){
        this->clubname = "NA";
        this->district = "NA";
        this->Theteammanager = "NA";
    }
    FootballClub::FootballClub(string clubname, string district, string Theteammanager){
        this->clubname = clubname;
        this->district = district;
        this->Theteammanager = Theteammanager;  //added for q3
    }

    string FootballClub::getClubname(){
        return clubname;
    }
    string FootballClub::getDistrict(){
        return district;
    }
    string FootballClub::getTheteammanager(){
     return Theteammanager;
     }

    void FootballClub::setClubname(string clubname){
        this->clubname = clubname;
    }

    void FootballClub::setDistrictname(string district){
        this->district = district;
    }
    void FootballClub::setTheteammanager(string Theteammanager){
        this->Theteammanager = Theteammanager;
    }


    void FootballClub::printInfo(){
     cout<<clubname<<endl;
    }



   // void FootballClub::addPlayerToTeam(Player tmp,int ID){

    //    this->team[ID].setName(tmp.getForename(),tmp.getSurname());
    //    this->team[ID].setDOB(tmp.getDOB());
    //  this->team[ID].setPosition(tmp.getPosition());
    //    this->team[ID].setMobileNumber(tmp.getMobileNumber());
  //  }

    void FootballClub::addPlayerToSquad(Player tmp, int position){
    //   this->squad[position].setplayernumber(tmp.getplayernumber(),tmp.getplayernumber());    //
       this->squad[position].setName(tmp.getForename(), tmp.getSurname());
       this->squad[position].setPosition(tmp.getPosition());
        this->squad[position].setDOB(tmp.getDOB());
        this->squad[position].setPosition(tmp.getPosition());
        this->squad[position].setMobileNumber(tmp.getMobileNumber());

    }
    void FootballClub::printTeam(){

        for(int i=0;i<11;i++){             // q2 this extracts the first 11 players as the team members. please note the CSV file has been modified with the numbers 1 to 23 at the start of the string
            squad[i].printPlayerInfo();
        }

    }
    void FootballClub::printSquad(){

        for(int i=0;i<MAXSQUAD;i++){        // this shows the overall squad
            squad[i].printPlayerInfo();
        }

    }




