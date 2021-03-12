#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED

#endif // FOOTBALL_CLUB_H_INCLUDED


class footballclub{

private:

    string clubname;
    string district;
    string stripcolour;

public:

    footballclub( string clubname, string district) {
    this->clubname=clubname;
    this->district=district;
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


};
