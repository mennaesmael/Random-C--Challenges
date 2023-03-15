#include <iostream>
using namespace std;
int main()
{
    int const bankcharges = 10;
    int number_of_checks;
    float final_fees;
    cout << "please inter the number of checks written during the past month" << endl;
    cin >> number_of_checks;
    if(number_of_checks <0)
    {
        cout << " we Do not accept a negative value for the number of checks...please inter positive number ";
        cin >> number_of_checks;
    }
    else if (number_of_checks <20)
    {
        final_fees = bankcharges + .10 ;
        cout << " The bank`s fees for the month =  " << final_fees <<"$" << endl;
    }
    else if (number_of_checks >=20 && number_of_checks <=39)
    {
      final_fees = bankcharges + .08 ;
        cout << " The bank`s fees for the month =  " << final_fees <<"$" << endl;
    }
    else if (number_of_checks >=40 && number_of_checks <=59)
    {
      final_fees = bankcharges + .06 ;
        cout << " The bank`s fees for the month =  " << final_fees <<"$" << endl;
    }
    else
    {
        final_fees = bankcharges + .04 ;
        cout << " The bank`s fees for the month =  " << final_fees <<"$" << endl;
    }
    return 0;
}
