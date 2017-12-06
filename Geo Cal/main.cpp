#include <iostream> //Input/Output Stream Library
#include <iomanip>

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Function Prototypes

//Execution Begins Here!
int main() {

int choice;
float area, radius, length, width, base, height;
const float PI = 3.14159;
const int CIRCLE_CHOICE = 1, RECTANGLE_CHOICE = 2, TRIANGLE_CHOICE = 3,
QUIT_CHOICE = 4;

//display the menu and user picks
cout << "********************************************" << endl;
cout << "           Geometry Calculator" << endl;
cout << "********************************************" << endl;
cout << "1. Area of Circle" << endl;
cout << "2. Area of Rectangle" << endl;
cout << "3. Area of Triangle" << endl;
cout << "4. Quit Program" << endl;
cout << "What program do you want to use (1-4): " << endl;
cin >> choice;
cout << fixed << setprecision(2);
switch(choice)
{
case CIRCLE_CHOICE:
cout << "What is the Radius of the Circle: " << endl;
cin >> radius;
if(radius < 0)
{
cout << "Radius can only be positive!"
    << "Enter radius again:" << endl;
cin >> radius;
}
area = PI * radius * radius;
cout << "The Area of the Circle is = " << area << " in square units" << endl;
break;

case RECTANGLE_CHOICE:
cout << "What is the length of the rectangle: " << endl;
cin >> length;
if(length < 0)
{
cout << "Length is less than 0!"
    << "Enter length again:" << endl;
cin >> length;
}
cout << "What is the width of the rectangle: " << endl;
cin >> width;
if(width < 0)
{
cout << "Width is less than 0!"
    << "Enter width again:" << endl;
cin >> width;
}
area = length * width;
cout << "Area of Rectangle is = " << area << " square units" << endl;
break;

case TRIANGLE_CHOICE:
cout << "What is the base of the triangle: " << endl;
cin >> base;
if(base < 0)
{
cout << "Base is less than 0!"
    << "Enter base again:" << endl;
cin >> base;
}
cout << "Enter the height of the triangle: ";
cin >> height;
if(height < 0)
{
cout << "Height is less than 0!"
    << "Enter height again:" << endl;
cin >> height;
}
area = base * height * 0.5;
cout << "The triangle's area is = " << area << " square units" << endl;
break;
case QUIT_CHOICE:
cout << "The program is ending..." << endl;
break;

default:
cout << "The valid choices are 1-4"
<< "Run the program again" << endl;
}

return 0;
}