#include <iostream> //Input/Output Stream Library
#include <iomanip>

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Function Prototypes

//Execution Begins Here!
int main() {

int balance;
 int ckwrit;
 int fee1;
 int fee2;
 int totalfee;
 
cout<<"Enter your current balance"<<endl;
cin>>balance;
cout<<"Enter the check written "<<endl;
cin>>ckwrit;

if(balance<400)
{
fee1=15;
}
else 
{
fee1=0;
}

if(ckwrit<=20)
{
fee2=(10*ckwrit);
}

else if(ckwrit>20 && ckwrit<=39)
{
fee2=(8*ckwrit);
}

else if(ckwrit>39 && ckwrit <=59)
{
fee2=(6*ckwrit);
}

else if (ckwrit >=60)
{
fee2=(5*ckwrit);
}

totalfee=fee1+fee2;
cout<<"Total fee is ="<<totalfee<<endl;
cout<<"Check fee is ="<<fee2<<endl;
cout<<"You will have a low fee balance ="<<fee1<<endl;
 
}