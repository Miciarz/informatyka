//Lider
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void wpisz (int tab[]);
void wypisz (int tab[]);
void lider (int tab[]);

// promptuje uzytkownika do wpisania 15 liczb do tablicy tab
void wpisz (int tab[])
{
    for (int i = 0; i < 15; i++)
    {
        cout << "Wpisz " << i + 1	<< " liczbe: ";
        cin >> tab[i];
    }
}

// wypisuje po spacji elementy tablicy tab
void wypisz (int tab[15])
{
    for (int i = 0; i < 15; i++)
        cout << tab[i] << " ";
    cout << endl;
}

void lider(int tab[])
{
    unsigned licz = 1;
    int lider = tab[0];

    for(int i = 1; i < 15; i++)
    {
        if(licz == 0)
        {
            lider = tab[i];
            licz = 1;
        }
        else // kiedy licz != 0
        {
            if (tab[i] == lider)
                licz++;
            else
                licz--;
        }
    }

    if (licz == 0)
        cout << "Ten zbior nie zawiera lidera.";
    else
    {
        licz = 0;
        for (int i = 0; i < 15; i++)
            if (tab[i] == lider)
                licz++;

        if (licz > 7)
            cout << "Liderem tego zbioru jest " << lider << ".";
        else
            cout << "Ten zbior nie posiada lidera.";
    }
}

int main()
{
    unsigned liczba;
    int tab[15];
    wpisz(tab);
    cout << "Elementy tablicy: ";
    wypisz(tab);
    lider(tab);
}