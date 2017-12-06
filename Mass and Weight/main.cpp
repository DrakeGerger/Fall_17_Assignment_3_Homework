#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

 int mass;
 float w;
 cout<<"Enter the Mass of Body"<<endl;
 cin>>mass;
 
 w=mass*9.8;
 
 if(mass>=1000)
 {
 cout<<"Wow to much Mass:  "<<mass<<endl;
 }
 else if(mass<=10)
 {
 cout<<"Now that is just to little of Mass: "<<mass<<endl;
 }
 cout<<"The weight of the object is "<<w<<endl;

return 0;
}