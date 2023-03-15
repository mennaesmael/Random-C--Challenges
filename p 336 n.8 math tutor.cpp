#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int const min_num=10;
    int const max_num=50;
    int num1;
    int num2;
    int answer;
    int correct_Answer;
    unsigned seed = time(0);
    srand(seed);
    num1 = (rand() % (max_num - min_num + 1)) + min_num;
    num2 = (rand() % (max_num - min_num + 1)) + min_num;
    answer = num1 + num2;
    cout << num1 << " + " << num2 << " = ? ";
    cout << " \nplease inter the correct Answer  " ;
    cin >> correct_Answer;
    if(correct_Answer==answer)
    {
        cout << "congratulations you are right!";
    }
    else
    {
        cout << " you are wrong the correct Answer is =  " << answer << endl;
    }

  return 0;

}
