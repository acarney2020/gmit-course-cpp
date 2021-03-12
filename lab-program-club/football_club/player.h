#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED


#endif // PLAYER_H_INCLUDED

class player{

private:

    string forename;
    string surname;
    string position;
    int mobilenumber;

public:

    player( string forename, string surname, string position, int mobilenumber) {
    this->forename=forename;
    this->surname=surname;
    this->position=position;
    this->mobilenumber=mobilenumber;
    }

     player()

void printInfo(){
}

string getforename(){
return forename;
}

string getsurname(){
return surname;
}

string getposition(){
return position;
}

int getmobilenumber(){
return mobilenumber;
}



void setforename (string forename){
}

void setsurname (string surname){
}

void setposition (string position){
}

void setmobilenumber (int mobilenumber){
}


};
