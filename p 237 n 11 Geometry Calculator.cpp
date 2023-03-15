#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int choice;
    cout<<"Geometry Calculator" << endl;
    cout <<"                               "<<endl;
    cout <<"1. Calculate the Area of a Circle" << endl;
    cout <<"2. Calculate the Area of a Rectangle" <<endl;
    cout <<"3. Calculate the Area of a Triangle" << endl;
    cout <<"4. Quit" << endl;
    cout <<"                               "<<endl;
    cout <<"Enter your choice (1-4)" << endl;
    cin >> choice;
    if (choice<1 || choice>4)
    {
        cout <<"please inter  a number between 1 and 4" << endl;
    }
    else if(choice == 1)
    {
        float radius;
        float  const PI= 3.14;
        float The_Area_of_aCircle ;

        cout <<" please inter the radius" << endl;
        cin >> radius;
         if(radius <0)
         {
            cout <<"Error: please inter a positive number" <<endl;
         }
        The_Area_of_aCircle = PI * pow(radius , 2) ;
        cout << "The Area of a Circle =  " << The_Area_of_aCircle << endl;
    }
    else if (choice == 2)
    {
        float length;
        float width;
        float the_Area_of_aRectangle;
        cout << "please inter the length " << endl;
        cin >> length;
        if(length <0)
         {
            cout <<"Error: please inter a positive number" <<endl;
         }
        cout << "please inter the width " << endl;
        cin >> width;
        if(width <0)
         {
            cout <<"Error: please inter a positive number" <<endl;
         }
        the_Area_of_aRectangle = length * width;
        cout <<"the Area of a Rectangle =  " << the_Area_of_aRectangle << endl;


    }
    else if (choice == 3)
    {
        float base;
        float height;
        float the_Area_of_aTriangle;
        cout << " please inter the height of the triangle" << endl;
        cin >> base;
         if(base <0)
         {
            cout <<"Error: please inter a positive number" <<endl;
         }
        cout <<"please inter the length of the triangle`s base" << endl;
        cin >> height;
        if(height <0)
         {
            cout <<"Error: please inter a positive number" <<endl;
         }
         the_Area_of_aTriangle = (0.5 * base) * height;
         cout <<"the Area of a Triangle =  " <<  the_Area_of_aTriangle << endl;

    }
    else if (choice == 4)
    {
     cout << "thank you for using the program";
    }
return 0;
}
