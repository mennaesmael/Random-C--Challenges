#include <iostream>
using namespace std;
int main()
{
    float weight;
    float mass;
    float const wheel=9.8;
    cout << "please inter the object`s mass  ";
    cin >> mass;
    weight = mass*wheel;
    cout << weight <<  "  newtons  " <<endl;
    if(weight > 1000)
    {
        cout << " the object is too heavy";
    }
    if (weight < 10)
    {
        cout << " the object is too light";
    }
    return 0;

}
