#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float weight;
    float height;
    float BMI;
    cout << "This program calculates and displays a person`s body mass index (BMI)" << endl;
    cout << "please inter the weight" << endl ;
    cin >> weight;
    cout << "please inter the height" << endl;
    cin >> height;
    BMI = weight * 703 / pow (height , 2);
    cout << "your BMI is = " << BMI << endl;
    if (BMI >=18.5 && BMI <=25)
    {
        cout << " your weight is considered to be optimal" << endl;
    }
    else if (BMI < 18.5)
    {
        cout << " your weight is considered to be underweight" << endl;
    }
    else
    {
        cout << "your weight is considered to be overweight" << endl;
    }
    return 0;
}
