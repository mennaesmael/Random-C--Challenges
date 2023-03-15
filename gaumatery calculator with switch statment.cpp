#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
     int choice;
        float radius;
        float  const PI= 3.14;
        float The_Area_of_aCircle ;
        float length;
        float width;
        float the_Area_of_aRectangle;
        float base;
        float height;
        float the_Area_of_aTriangle;

    cout<<"Geometry Calculator" << endl;
    cout <<"                               "<<endl;
    cout <<"1. Calculate the Area of a Circle" << endl;
    cout <<"2. Calculate the Area of a Rectangle" <<endl;
    cout <<"3. Calculate the Area of a Triangle" << endl;
    cout <<"4. Quit" << endl;
    cout <<"                               "<<endl;
    cout <<"Enter your choice (1-4)" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1 :

        cout <<" please inter the radius" << endl;
        cin >> radius;
         The_Area_of_aCircle = PI * pow(radius , 2) ;
        cout << "The Area of a Circle =  " << The_Area_of_aCircle << endl;
        break;
        case 2 :
        cout << "please inter the length " << endl;
        cin >> length;
          cout << "please inter the width " << endl;
        cin >> width;
        the_Area_of_aRectangle = length * width;
        cout <<"the Area of a Rectangle =  " << the_Area_of_aRectangle << endl;
        break;

         case 3 :
        cout << " please inter the height of the triangle" << endl;
        cin >> base;
        cout <<"please inter the length of the triangle`s base" << endl;
        cin >> height;
        the_Area_of_aTriangle = (0.5 * base) * height;
        cout <<"the Area of a Triangle =  " <<  the_Area_of_aTriangle << endl;
         break;
         default : cout << "thank you for using our program";


    }
    return 0;
}
