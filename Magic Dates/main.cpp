#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

int month, day, year;
int magic;

cout << "please enter a month in numeric form"<< endl;
cin >> month;

cout << "please enter a day"<<endl;
cin >> day;

cout << "please enter a year"<< endl;
cin >> year;

magic = (month * day);

if (magic == year)
{
cout << "it is magic"<<endl;;
}
else
cout << "it is not magic" << endl;

return 0;
}