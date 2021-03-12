#include <iostream>


using namespace std;

#include "football_club.h"
#include "player.h"

int main()
{

    footballclub localclub("Oranmore", "Galway");
    player playerdetails("Alan","Carney","Striker",872345);


    cout <<"Club Name = " << localclub.getclubname()<< "    District Name = "<< localclub.getdistrict()<< endl;
    cout << "Forename = " << playerdetails.getforename()<< "  Surname = " <<playerdetails.getsurname()<< "  Position = " <<  playerdetails.getposition()<< "  Tel =" << playerdetails.getmobilenumber()<<endl;

    int squadsize = 40;
    player squad[squadsize];
    for{int i=0; i<squadsize; ++i){
    player1[i].setmobilenumber{i};
    player1[i].setforename("");
    player1[i].setDOB("80");

    obj.addplayer(squad[i],i)

    }

    int teamsize = 15;
    player team[teamsize];
    for{int i=0; i<teamsize; ++i){
    player1[i].setmobilenumber{i};
    player1[i].setforename("");
    player1[i].setDOB("80");

    obj.addplayer(squad[i],i);

    }



    return 0;
}
