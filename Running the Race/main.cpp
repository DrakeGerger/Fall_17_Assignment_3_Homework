#include <iostream> //Input/Output Stream Library
#include <iomanip>

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Function Prototypes

//Execution Begins Here!
int main() {

 int time1;
 string place1;
 int time2;
 string place2;
 int time3;
 string place3;
 
 cout<<"Name of Runner One: "<<endl;
 cin>>place1;
 cout<<"Enter the time Runner One finished at:"<<endl;
 cin>>time1;
 if(time1<=0)
 {
 cout<<"Please Enter the Correct Time"<<endl;
 }

 cout<<"Name of Runner Two: "<<endl;
 cin>>place2;
 cout<<"Enter the time Runner Two finished at:"<<endl;
 cin>>time2;
 if(time2<=0)
 {
 cout<<"Please Enter the Correct Time"<<endl;
 }
 
 cout<<"Name of Runner Three: "<<endl;
 cin>>place3;
 cout<<"Enter the time Runner Three finished at:"<<endl;
 cin>>time3;
 if(time3<=0)
 {
 cout<<"Please Enter the Correct Time"<<endl;
 }
 
 
 if(time1<time2 && time1<time3 && time2>time3)
 {
 cout<<"First Place is: "<<place1<<endl;
 cout<<"Second Place is: "<<place3<<endl;
 cout<<"Third Place is: "<<place2<<endl;
 }
 if(time1<time2 && time1<time3 && time2<time3)
 {
 cout<<"First Place "<<place1<<endl;
 cout<<"Second Place "<<place2<<endl;
 cout<<"Third Place "<<place3<<endl;
 }
 
 if(time2<time1 && time2<time3 && time1>time3)
 {
 cout<<"first place "<<place2<<endl;
 cout<<"second place "<<place3<<endl;
 cout<<"third place "<<place1<<endl;
 }
 
 if(time2<time1 && time2<time3 && time1<time3)
 {
 cout<<"first place "<<place2<<endl;
 cout<<"second place "<<place1<<endl;
 cout<<"third place "<<place3<<endl;
 }
 
 if(time3<time1 && time3<time2 && time2>time1)
 {
 cout<<"first place "<<place3<<endl;
 cout<<"second place "<<place1<<endl;
 cout<<"third place "<<place2<<endl;
 }
 if(time3<time1 && time3<time2 && time2<time1)
 {
 cout<<"first place "<<place3<<endl;
 cout<<"second place "<<place2<<endl;
 cout<<"third place "<<place1<<endl;
 }

return 0;
}