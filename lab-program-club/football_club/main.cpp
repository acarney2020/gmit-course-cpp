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


    return 0;
}
