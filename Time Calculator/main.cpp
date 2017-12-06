#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

int numSec = 0;
int numMin = 0;
int numHrs = 0;
int numDays = 0;

float tempSec;

cout << "This Program converts Seconds into Days, Hours, and Minutes"<<endl;
cout << "Enter large number seconds"<<endl;
cin >> numSec;

numDays = numSec / 86400;

tempSec = numSec % 86400;
numHrs = tempSec / 3600;

tempSec = numSec / 3600;
numMin = tempSec / 60;

tempSec = numSec % 60;

cout << endl;
cout << numSec << " Seconds = " << numDays << " Days, " << numHrs << " Hours, " << numMin <<" Minutes, and " << tempSec << " Seconds." << endl;

return 0;
}