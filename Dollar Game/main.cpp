#include <iostream> //Input/Output Stream Library


using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Function Prototypes

//Execution Begins Here!
int main() {

float pennies, nickels, dimes, quarters, total;

cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl
<< "    Change for a Dollar Game" << endl
<< "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
cout << endl;

cout << "Enter the number of pennies: ";
cin >> pennies;
cout << "Enter the number of nickels: ";
cin >> nickels;
cout << "Enter the number of dimes: ";
cin >> dimes;
cout << "Enter the number of quarters: ";
cin >> quarters;

total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);

if(total == 1.00)
cout << "Congrats, You Won! You change is exactly one dollar!" << endl;
else
{
if(total < 1.00 && total > 0)
{
cout << "You entered less than one dollar.  Try again!" << endl;
}
else 
{
if(total > 1.00)
{
cout << "You entered more than or less than one dollar.  Try again!" << endl;
}
else
{
cout << "The number of coins have to be greater than 0. Try again!" << endl;
}
}
}
 
return 0;
}