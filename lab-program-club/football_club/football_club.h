#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED

#endif // FOOTBALL_CLUB_H_INCLUDED


class footballclub{

private:

    string clubname;
    string district;
    string stripcolour;
    int squadsize;
    int teamsize;
    player squad[40];
    player team[15];

public:

    footballclub( string clubname, string district) {
    this->clubname=clubname;
    this->district=district;
    this->squad=squad;
    }

void printInfo(){
}

string getclubname(){
return clubname;
}

string getdistrict(){
return district;
}

string getstripcolour(){
return stripcolour;
}



void setclubname (string clubmane){
}

void setdistrict (string district){
}

void setstripColour (string stripcolour){
}

void addplayer(player tmp, int position){

    team[position].setname(tmp.getSurname());
    team[position].setDOB(tmp.getDOB());
                        )

}





};
