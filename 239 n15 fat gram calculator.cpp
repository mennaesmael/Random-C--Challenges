#include <iostream>
using namespace std;
int main ()
{
    int calories;
    float fats;
    float Calories_from_fat;
    float Thepercentage_ofcalories_fromfat;
    cout << "please inter the total calories" << endl;
    cin >> calories;
    if (calories<0)
        {
            cout << "please re run the program again and inter positive number" << endl;
        }
        cout << "please inter the number of fat grams  " << endl;
        cin >> fats;
        if (fats<0)
        {
        cout << "please re run the program again and inter positive number" << endl;
        }
        Calories_from_fat = fats * 9;
        if (Calories_from_fat >  calories)
        {
            cout << "Error: either the calories or fat grams were incorrectly entered." << endl;
        }
        Thepercentage_ofcalories_fromfat = Calories_from_fat / calories;
        cout << "The percentage of calories from fat =  " << Thepercentage_ofcalories_fromfat << "%" << endl;

        if (Thepercentage_ofcalories_fromfat < 30)
        {
            cout << "This is food is low fat" << endl;
        }
        return 0;
}
