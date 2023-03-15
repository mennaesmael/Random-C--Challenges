#include <iostream>
using namespace std;
int main()
{
    int dynasty;
    cout <<" please enter the dynasty number\n The old kingdom dynasties are from 3 to 6 so please inter a number from 3 to 6" << endl;
    cin >> dynasty;
    switch (dynasty)
    {
        case 3 : cout << " The list of kings are :\n Djoser\n Sekhemkhet\n Sanakht\n Khaba\n Huni\n";
        break;
        case 4 : cout << "The list of kings are :\n Sneferu\n Khufu\n Djedefre\n Khafre\n Baka/Bauefrê\n Menkaure\n Shepseskaf\n Thamphthis\n ";
        break;
        case 5 : cout <<"The list of kings are :\n Userkaf\n Sahure\n Neferirkare Kakai\n Neferefre\n Shepseskare\n Nyuserre Ini\n Menkauhor Kaiu\n Djedkare Isesi\n Unas\n ";
        break;
        case 6 : cout << "The list of kings are :\n Teti\n Userkare\n Meryre Pepi I\n Merenre Nemtyemsaf I\n Neferkare Pepi II\n Neferka\n Merenre Nemtyemsaf II\n Neitiqerty Siptah\n";
        break;
        default : cout << " invalid dynasty... please inter a number from 3 to 6" << endl;
    }
    return 0;
}
