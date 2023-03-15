#include <iostream>

using namespace std;

int main()

{

    string runner1, runner2, runner3;

    float time1,time2,time3;

    cout << "Enter the name of the first Runner: " <<endl;

    cin >> runner1;

    cout << "Enter the time of the first Runner: " <<endl;

    cin >> time1;

    if (time1<0)

    {

        cout << "You have entered a negative number\n";

        return 1;

    }

    cout << "Enter the name of the second Runner: " <<endl;

    cin >> runner2;

    cout << "Enter the time of the second Runner: " <<endl;

    cin >> time2;

    if (time2<0)

    {

        cout << "You have entered a negative number\n";

        return 2;

    }

    cout << "Enter the name of the third Runner: " <<endl;

    cin >> runner3;

    cout << "Enter the time of the third Runner: " <<endl;

    cin >> time3;

    if (time3<0)

    {

        cout << "You have entered a negative number\n";

        return 3;

    }

    if (time1 <= time2 && time1 <= time3)

    {

        if (time2 <= time3)

            cout << runner1 << " is the first\n" << runner2 << " is the second\n" << runner3 << " is the third\n";

        else

            cout << runner1 << " is the first\n" << runner3<< " is the second\n" << runner2 << " is the third\n";

    }

    else if (time2 <= time1 && time2 <= time3)

    {

        if (time1 <= time3)

            cout << runner2 << " is the first\n" << runner1 << " is the second\n" << runner3 << " is the third\n";

        else

            cout << runner2 << " is the first\n" << runner3 << " is the second\n" << runner1 << " is the third\n";

    }else

    {

        if (time1 <= time2)

            cout << runner3 << " is the first\n" << runner1 << " is the second\n" << runner2 << " is the third\n";

        else

            cout << runner3 << " is the first\n" << runner2 << " is the second\n" << runner1 << " is the third\n";

    }

    return 0;

}
