  #include "player.h"


    Player::Player(){
        this->playernumber = 0 ;
        this->forename = "";
        this->surname = "";
        this->position="";
        this->mobileNumber="";
        this->dob=0;
    }
    Player::Player(int playernumber, string forename, string surname){
        forename=forename;
        this->surname=surname;
    }


    Player::Player(int playernumber, string forename, string surname, int mobileNumber, string position){
        this->playernumber=playernumber;
        this->forename=forename;
        this->surname=surname;
        this->mobileNumber=mobileNumber;
        this->position=position;
    }

    void Player::printPlayerInfo(){
        cout<< "playernumber:"<<playernumber<< "Name:"<<forename<<" "<<surname<<", DOB: "<<dob<<", position:"<<position<<", contact:"<<mobileNumber<<endl;

    }
   int Player::getplayernumber(){
     return playernumber;

    }

    string Player::getForename(){
        return forename;
    }
    string Player::getSurname(){
        return surname;
    }

    void Player::setMobileNumber(string mobileNumber){
        this->mobileNumber = mobileNumber;
    }
    string Player::getMobileNumber(){
        return this->mobileNumber;
    }
    void Player::setName(string name){
        this->forename=name;

    }

   //void Player::setplayernumber(int playernumber(){
   // this->playernumber = playernumber;

  //  }
    void Player::setName(string forename,string surname){
        this->forename = forename;
        this->surname = surname;
    }
    void Player::setPosition(string position){
        this->position = position;
    }
    string Player::getPosition(){
        return this->position;
    }
    void Player::setDOB(int dob){
       this->dob=dob;
    }
    int Player::getDOB(){
        return dob;
    }
