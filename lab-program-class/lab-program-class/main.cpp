#include <iostream>

using namespace std;

#include "function.h"    // this brings in the function //


class Labinfo{      // defines the class //

private:         // This means that day/month/year are not accessible publicly. If this is deleted the file will compile properly//
string day;
string month;     // All of the strings allow for the assignment to be answered and the class to work
string year;
public:
string name;
string labid;



void Printinfo(){      // This is to allow the information to be printed//
cout<<name<<endl;
cout<<labid<<endl;
cout<<"Date:" <<day<<":"<<month<<":"<<year<<endl;   // This was to enssure the day/month/year were printed in the format as per the assignment //

}
};



int main()
{

LabInfo();         // this calls in the class into the main program //


Labinfo details;                  // just used the word detail as any word could be used//
details.name="Alan Carney";
details.labid="Lab4";
details.day="12";
details.month="02";
details.year="2021";

details.Printinfo();     // Note: do not have the opportunity before sundays dealine to improve this further. This program was completed in the lab time //


    return 0;

}
