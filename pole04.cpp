// pole04.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int n;
    char znaky[10];
    srand((unsigned)time(NULL));
    cout << "Zadejte cele cislo n: ";
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        char znak = char(65 + rand() % (90 - 65 + 1));
        cout <<endl<< znak;
        znaky[i] = znak;
    }
    bool vyhovujiciZnak = false;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (znaky[i] > znaky[0] && znaky[i] < znaky[n - 1])
        {
            vyhovujiciZnak = true;
            cout << endl << znaky[i];
        }
    }
    if (!vyhovujiciZnak)cout << "\nZadny znak nevyhovuje nevyhovuje podminkam";
    return 0;
}


