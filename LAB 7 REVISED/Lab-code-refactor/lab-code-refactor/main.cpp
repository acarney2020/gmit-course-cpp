#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#include "football_club.h"

void test(){

/*
string galwayTeam[2][]=   {{"Ruairi", "Lavelle"},
                            {"Eoghan", "Kerin"},
                            {"Sean Andy", "Ó Ceallaigh"},
                            {"David", "Wynne"},
                            {"Gary", "O'Donnell"},
                            {"Gareth", "Bradshaw"},
                            {"Johnny", "Heaney"},
                            {"Thomas", "Flynn"},
                            {"Ciarán", "Duggan"},
                            {"Michael", "Daly"},
                            {"Johnathan", "Duane"},
                            {"Eamon", "Brannigan"},
                            {"Barry", "McHugh"},
                            {"Padraig", "Cunningham"},
                            {"Antaine", "Ó Laoí"}}

*/

}




int main()
{
    FootballClub club;
    club.printInfo();
    club.setClubname("Castletown");
    club.setDistrictname("Westmeath");
    club.setTheteammanager("Alan Carney is the manager"); // Q3 setting the manager

    string Theteammanager = club.getTheteammanager();
    Theteammanager = club.getTheteammanager();
    cout << Theteammanager<< endl;   // Q3 printing out the managers name

    Player playerTemp;

    //READING DATA FROM A FILE
    fstream infile;
    infile.open("teamSquad.csv", ios::in);   // this pulls from ythe
    int playernumber;  // added for q2 - defining team member
    string firstName, secondName, dob, position, mobile;
    string line;
    int i = 0;
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>playernumber>>firstName>>secondName>>dob>>position>>mobile)){   // Stephen, i have the playernumbner here which allows for extraction from the CSV file on Q2.
            break;
        }
        else{
          //  cout<<"INPUT ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
            club.addPlayerToSquad(playerTemp, i);
        }
        //increments
        i =i+1;
    }
    infile.close();

    //READING DATA FROM A FILE       //  remnoving team team out of the program
    /*infile.open("teamTeam.csv", ios::in);
    i = 0; //reset i
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>firstName>>secondName>>dob>>position>>mobile)){
            break;
        }
        else{
            //cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
            club.addPlayerToTeam(playerTemp, i);
        }
        //increments
        i =i+1;
    }
*/
    cout<<"<<---------------->>"<<endl;
    cout<<"SQUAD"<<endl;    // this prints out the squad members
    club.printSquad();
    cout<<"TEAM"<<endl;   // this prints out the first 11 players from the csv file.
    club.printTeam();



    return 0;
}

