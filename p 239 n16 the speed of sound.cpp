#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int medium;
    cout << "please select one from the following mediums" << endl;
    cout << "1. Air"<<endl;
    cout << "2. water" << endl;
    cout << "3. steel " << endl;
    cout << "please inter the number of your selection " << endl;
    cin >> medium;
    if (medium <1 || medium >3)
    {
        cout << "please  re run the program again and choose a number from 1 to 3 " << endl;
    }
    else if(medium == 1)
    {
        double secondsinAir;
        double distanceinAir;
        int  const speedinAir = 1.100;
        cout << "please inter the distance " << endl;
        cin >> distanceinAir;
        if (distanceinAir<0)
        {
            cout << "we don`t accept negative values please re run the program again and inter a positive number  " << endl;
        }

        secondsinAir = distanceinAir / speedinAir;
        cout << " it will takes " << fixed << setprecision(4)  << secondsinAir << " seconds" << endl;
    }
    else if (medium == 2)
    {
        double secondsinwater;
        double distanceinwater;
        int  const speedinwater = 4.900;
        cout << "please inter the distance " << endl;
        cin >> distanceinwater;
        if (distanceinwater<0)
        {
            cout << "we don`t accept negative values please re run the program again and inter a positive number  " << endl;
        }

        secondsinwater = distanceinwater / speedinwater;
        cout << " it will takes " << fixed << setprecision(4)  << secondsinwater << " seconds" << endl;
    }
    else
    {
        double secondsinsteel;
        double distanceinsteel;
        int  const speedinsteel = 16.400;
        cout << "please inter the distance " << endl;
        cin >> distanceinsteel;
        if (distanceinsteel<0)
        {
            cout << "we don`t accept negative values please re run the program again and inter a positive number  " << endl;
        }

        secondsinsteel = distanceinsteel / speedinsteel;
        cout << " it will takes " << fixed << setprecision(4)  << secondsinsteel << " seconds" << endl;
    }
  return 0;
}
