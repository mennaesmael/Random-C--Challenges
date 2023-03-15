#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double numberofseconds;
    int days;
    cout << " please inter the number of seconds  ";
    cin >> numberofseconds;
    if (numberofseconds>=86400)
    {
        days = numberofseconds / 86400;
        cout << "the number of seconds = " << fixed <<setprecision(1) <<days << "  days";
    }

    else if(numberofseconds<86400 && numberofseconds>=3600)
    {
        int hours;
        hours = numberofseconds / 3600;
        cout << "the number of seconds = "  << fixed << setprecision(1) << hours << "  hours";

    }

    else if ( numberofseconds<3600 && numberofseconds>= 60)
    {
        int minutes;
        minutes = numberofseconds / 60 ;
        cout << " the number of seconds = " << fixed << setprecision(1) << minutes << "  minutes";
    }
    return 0;
}
