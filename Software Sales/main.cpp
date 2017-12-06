#include <iostream> //Input/Output Stream Library
#include <iomanip>

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Function Prototypes

//Execution Begins Here!
int main() {

int unitsSold; //Holds units sold
float totalCost, discount, packagePrice = 99.00;

//Quantity purchased
cout << "Enter the amount of Units Sold and it will display the discounted Total Cost." << endl;
cin >> unitsSold;

//Determines the discount
    if (unitsSold >= 10)
    {
    discount = .20;
    cout << "Your discount is 20%" << endl;
    }
    
    if(unitsSold >= 20)
    {
    discount = .30;
    cout << "Your discount is 30%" << endl;
    }

    else if(unitsSold >= 50)
    {
    discount = .40;
    cout << "Your discount is 40%" << endl;
    }

    else if (unitsSold >= 100)
    {
    discount = .50;
    cout << "Your discount is 50%" << endl;
    }
    
//Calculates totalcost
    totalCost = packagePrice * unitsSold * discount;

//Displays totalcost
    cout << "Your Total Cost is: $" << totalCost << endl;
    
    
return 0;
}
