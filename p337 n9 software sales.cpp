#include <iostream>
using namespace std;
int main()
{
    int  const originalprice = 99;
    int numberofunits;
    double price_before_dis;
    double price_after_dis;


    cout << "please inter the number of units purchased" << endl;
    cin >> numberofunits;
    if (numberofunits<10)
    {
        cout << " you don`t have any discount!";
       price_before_dis = numberofunits * originalprice;
       cout << " The price =  " << price_before_dis << endl;
       cout << " thank you for buying from our company!";
    }
    else if (numberofunits>= 10 && numberofunits<=19)
    {
        cout << " you have a discount !" << endl;
        price_before_dis = numberofunits * originalprice;
        cout << " the price before discount =  " << price_before_dis << endl;
        price_after_dis = price_before_dis * 0.8;
        cout << " The price after discount =  " << price_after_dis << endl;
        cout << " Thank you for buying from our company!";


    }
     else if (numberofunits>= 20 && numberofunits<=49)

    {
        cout << " you have a discount !" << endl;
        price_before_dis = numberofunits * originalprice;
        cout << " the price before discount =  " << price_before_dis << endl;
        price_after_dis = price_before_dis * 0.7;
        cout << " The price after discount =  " << price_after_dis << endl;
        cout << " Thank you for buying from our company!";

    }
   else if (numberofunits>= 50 && numberofunits<=99)
    {
        cout << " you have a discount !" << endl;
        price_before_dis = numberofunits * originalprice;
        cout << " the price before discount =  " << price_before_dis << endl;
        price_after_dis = price_before_dis * 0.6;
        cout << " The price after discount =  " << price_after_dis << endl;
        cout << " Thank you for buying from our company!";

    }
    else
    {
        cout << " you have a discount !" << endl;
        price_before_dis = numberofunits * originalprice;
        cout << " the price before discount =  " << price_before_dis << endl;
        price_after_dis = price_before_dis * 0.5;
        cout << " The price after discount =  " << price_after_dis << endl;
        cout << " Thank you for buying from our company!";
    }


     return 0;
}
