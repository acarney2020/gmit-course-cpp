  #include "player.h"

// i tried pulling down your file from moodle and following your instructions but it will not work. dont have the time to fix it.


  // i am trying to change the csv file so that i add " player number" and if the player number is less than 11,
  //then the player is on the team but greter than that they are squad member..
  //so i can remove the "team" csv requirement and use the squad file.
  // so i need to do some kind of an if/else statement or loop to differentiate the player numbers
  // this assumes that the csv file be kept in order at all times.




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
    int playernumber::getplayernuber(){
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

    void player::setplayernumber(int playernumber(){
        this->playernumber = playernumber;

    }
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
