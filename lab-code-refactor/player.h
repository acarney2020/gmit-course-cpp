#include <iostream>

using namespace std;



class Player{
private:
    int playernumber;
    string forename;
    string surname;
    string position;
    string mobileNumber;
    int dob;

public:
    Player();
    Player(int playernumber, string forename, string surname);
    Player(int playernumber, string forename, string surname, int mobileNumber, string position);

    void printPlayerInfo();
    int getplayernumber();
    string getForename();
    string getSurname();

    void setName(string name);
    void setName(string forename,string surname);

    void setplayernumber(int playernumber);
//    int getplayernumber();
    void setPosition(string position);
    string getPosition();
    void setMobileNumber(string mobileNumber);
    string getMobileNumber();


    void setDOB(int dob);
    int getDOB();

};

