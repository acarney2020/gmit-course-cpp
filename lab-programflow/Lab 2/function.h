void labinfo1() {
    cout << "ALan\n";
    cout << "Lab #2" << endl;
}

int exercise2 (int x, int y) {

    if(x > y) {

    cout << " The largest value is " << x << endl;
    }

    else{
    cout << "The largest value is " << y << endl;



    }
    return 0;
}

float exercise3(float num1) {

    if(num1>1 && num1<100) {

    cout << "The number you entered is betwee 1 and 100" << endl;

    }
    else{
    cout << "The number you entered is not between 1 and 100" << endl;
    }
 return 0;

}

int exercise4 (int day){


    switch (day){
    case 1:
    cout << "Monday";
    break;
    case 2:
    cout << "Tuesday";
    break;
    case 3:
    cout << "Wednesday";
    break;
    case 4:
    cout << "Thursday";
    break;
    case 5:
    cout << "Friday";
    break;
    case 6:
    cout << "Saturday";
    break;
    case 7:
    cout << "Sunday";
    break;
    }

return 0;


}

float exercise5() {

float radius = 0;
float PI=3.14159;
float area= 0;

cout << "\n\n Please enter your radius" <<endl;
cin >> radius;

area = radius * radius * PI;

cout <<"The area of your circle is:" << area <<endl;

return 0;


}

float exercise6() {

float Length = 0;
float Breadth = 0;
float Areaofrect = 0;

cout << "\n\n Please enter your rectangle length" <<endl;
cin >> Length;
cout << "\n\n Please enter your rectangle Breadth" <<endl;
cin >> Breadth;

Areaofrect = Length * Breadth;

cout <<"The area of your rectangle is:" << Areaofrect<<endl;

return 0;

}

void exercise7() {

int temp = 0;
int Humid = 0;

cout << "\n\n Please enter the temperature" <<endl;
cin >> temp;
cout << "\n\n Please enter the humidity" <<endl;
cin >> Humid;

if ((temp>=95) || (Humid >= 90)) {
cout << " Warning Alarm... temperature or humifty range error"<< endl;
}

}

float exercise8() {

float radius = 0;
float PI=3.14159;
float area= 0;

for (float radius =1; radius <120; ++radius ) {

area = radius * radius * PI;

cout <<"The area of your circle is:" << area <<endl;
}
return 0;
}

void exercise9() {

float tempinput = 0;
char selectedtemptype =0;
float celsiustofarnheit = 0;
float farnheittocelsius = 0;


cout<<"Please enter a temperarture for conversion" <<endl;
cin>>tempinput;

cout<< "Please enter C if your number is Celsius and you want to convert to Farnheit or F to convert to Farnheit to Celsius "<<endl;
cin>>selectedtemptype;

celsiustofarnheit = ((tempinput * 9/5)+32);
farnheittocelsius = ((tempinput - 32)*5/9);


    switch (selectedtemptype){
    case 'c':
    cout << celsiustofarnheit<<endl;
    break;
    case 'f':
    cout << farnheittocelsius<<endl;

    }

}


void exercise10() {

int value = 0;


for ( int input = 1; input < 1000; ++input) {

if ( value = (input % 2 == 0) ){

    cout<<input<<endl;
}
}
}


void exercise11() {

int value1 =0;
int value2 =0;
int value3 =0;

cout<<"Please enter value number one"<<endl;
cin>>value1;
cout<<"please enter value number two"<<endl;
cin>>value2;

for( int input =value1; input < value2; ++input ) {

if ( value3 = (input % 2 == 0) ){

        cout<<input<<endl;
}

}

}


void exercise12() {

int arr[6];
arr[0];
arr[1]=0;
arr[2]=0;
arr[3]=0;
arr[4]=0;
arr[5]=0;
int i=0;


cout<<"please enter the array number 1"<< endl;
cin>>arr[0];
cout<<"please enter the array number 2"<< endl;
cin>>arr[1];
cout<<"please enter the array number 3"<< endl;
cin>>arr[2];
cout<<"please enter the array number 4"<< endl;
cin>>arr[3];
cout<<"please enter the array number 5"<< endl;
cin>>arr[4];
cout<<"please enter the array number 6"<< endl;
cin>>arr[5];


for( int i = 0; i <=6 ; ++i ) {

if ( arr[i]% 2 == 1) {

        cout<<"The odd numbers from your array are " << arr[i]<< "," <<endl;

}


}
}


void exercise13() {


int v1 =0;
int v2 =0;
int v3 =0;
int v4 =0;
int v5 =0;
int v6 =0;


v1 = rand() % 100;
v2 = rand() % 100 +1;
v3 = rand() % 30 + 1985;
v4 = rand() % 344 + 383222;
v5 = rand() % 32 + 1234;
v6 = rand() % 4838 + 567890;

cout<<"random numner 1 is " <<v1<<endl;
cout<<"random numner 2 is " <<v2<<endl;
cout<<"random numner 3 is " <<v3<<endl;
cout<<"random numner 4 is " <<v4<<endl;
cout<<"random numner 5 is " <<v5<<endl;
cout<<"random numner 6 is " <<v6<<endl;



}



void exercise14() {

int i=5;
while (i < 10)
{
 cout << i;
 cout << endl;
 i = i + 1;
}
/* Finding the sum 1 + 2 + 3 + ... + 20 */
i = 1;
int sum = 0;
while (i <= 20)
{
 sum = sum + i;
 i = i + 1;
}
cout << "The sum = " << sum<<endl;
/* Average a list of grades terminated by -1 */
sum = 0;
int count = 0;
int grade=0;
cout << "Enter grade (-1 to end): "; // prompt user for grade
cin >> grade; // read grade
while (grade != -1)
{
 sum = sum + grade;
 count = count + 1;
 /* Get next grade */
 cout << "Enter grade (-1 to end): "<<endl;
 cin >> grade;
}
if (count > 0)
 cout << "Average is " << (double) sum / count;


}


void exercise15() {

int a=0;

cout<< "The is the word FINISHED printed 10 times using a while statement"<<endl;

while(a<=10) {

cout<<"FINISHED"<<endl;

a++;

}

int b=0;

cout<<"The is the word FINISHED printed 10 times using a do while statement"<<endl;

do {

cout<<"FINSHED"<<endl;
b++;
}

while (b<=10);

{

int c =0;

cout<<"The is the word FINISHED printed 10 times using a for statement"<<endl;

for (c=0; c<=10; ++c) {

cout<<"FINISHED"<<endl;

}


}


}


