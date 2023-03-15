#include <iostream>
using namespace std;
int main()
{
    const float VAULT_HEIGHT_MIN = 2.0,
                VAULT_HEIGHT_MAX = 5.0;

    string pole_vaulter,
           vault_date_1,
           vault_date_2,
           vault_date_3;

    float vault_height_1,
          vault_height_2,
          vault_height_3;

    cout << "Enter pole vaulter's name: ";
    cin >> pole_vaulter;

    cout << "Enter date( 1/7/2018) of vault #1: ";
    cin >> vault_date_1;
    cout << "Enter height(in meters) for vault #1: ";
    cin >> vault_height_1;

    cout << "Enter date(1/7/2018) of vault #2: ";
    cin >> vault_date_2;
    cout << "Enter height(in meters) for vault #2: ";
    cin >> vault_height_2;

    cout << "Enter date(1/7/2018) of vault #3: ";
    cin >> vault_date_3;
    cout << "Enter height(in meters) for vault #3: ";
    cin >> vault_height_3;

    if ((vault_height_1 < VAULT_HEIGHT_MIN ||
         vault_height_1 > VAULT_HEIGHT_MAX)
         ||
        (vault_height_2 < VAULT_HEIGHT_MIN ||
         vault_height_2 > VAULT_HEIGHT_MAX)
         ||
        (vault_height_3 < VAULT_HEIGHT_MIN ||
         vault_height_3 > VAULT_HEIGHT_MAX))
    {
        cout << endl;
        cout << "We're sorry, vault height must be\n"
             << "between 2.0 and 5.0 meters. Rerun\n"
             << "the program and try again.\n"
             << endl;
    }
    else
    {
        if (vault_height_1 > vault_height_2)
        {
            if (vault_height_1 > vault_height_3)
            {
                cout << "The first record  : "
                     << vault_height_1;
                cout << " Date: "
                     << vault_date_1
                     << endl;

                if (vault_height_2 > vault_height_3)
                {
                    cout << "the second record: "
                         << vault_height_2;
                    cout << " Date: "
                         << vault_date_2
                         << endl;

                    cout << "the third record: "
                         << vault_height_3;
                    cout << " Date: "
                         << vault_date_3
                         << endl;
                }
                else
                {
                    cout << "the second record: "
                         << vault_height_3;
                    cout << " Date: "
                         << vault_date_3
                         << endl;

                    cout << "the third record: "
                         << vault_height_2;
                    cout << " Date: "
                         << vault_date_2
                         << endl;
                }

            }
        }

        if (vault_height_2 > vault_height_1)
        {
            if (vault_height_2 > vault_height_3)
            {
                cout << "the first record: "
                     << vault_height_2;
                cout << " Date: "
                     << vault_date_2
                     << endl;

                if (vault_height_1 > vault_height_3)
                {
                    cout << "the second record: "
                         << vault_height_1;
                    cout << " Date: "
                         << vault_date_1
                         << endl;
                    cout << "the third record: "
                         << vault_height_3;
                    cout << " Date: "
                         << vault_date_3
                         << endl;
                }
                else
                {
                    cout << "the second record: "
                         << vault_height_3;
                    cout << " Date: "
                         << vault_date_3
                         << endl;
                    cout << "the third record: "
                         << vault_height_1;
                    cout << " Date: "
                         << vault_date_1
                         << endl;
                }

            }
        }

        if (vault_height_3 > vault_height_1)
        {
            if(vault_height_3 > vault_height_2)
            {
                cout << "the first record: "
                     << vault_height_3;
                cout << " Date: "
                     << vault_date_3
                     << endl;

                if (vault_height_1 > vault_height_2)
                {
                    cout << "the second record: "
                         << vault_height_1;
                    cout << " Date: "
                         << vault_date_1
                         << endl;
                    cout << "the third record: "
                         << vault_height_2;
                    cout << " Date: "
                         << vault_date_2
                         << endl;
                }
                else
                {
                    cout << "the second record: "
                         << vault_height_2;
                    cout << " Date: "
                         << vault_date_2
                         << endl;
                    cout << "the third record: "
                         << vault_height_1;
                    cout << " Date: "
                         << vault_date_1
                         << endl;
                }
            }
        }
    }

    cout << endl;

     return 0;
}
