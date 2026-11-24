#include <iostream>
#include "airplane.h"

using namespace std;

// Check if a flight has departed
void check(int h, int m, Airplane *ch)
{
    if (ch->get_hour() < h ||
       (ch->get_hour() == h && ch->get_minute() <= m))
    {
        ch->get();
        cout << "Status: DEPARTED" << endl;
    }
    else
    {
        ch->get();
        cout << "Status: NOT DEPARTED" << endl;
    }
}

int main()
{
    int N = 3;

    Airplane *ch = new Airplane[N];

    cout << "SET" << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "\nFlight " << i + 1 << endl;
        ch[i].set();
    }

    // enter  time
    int h, m;

    cout << "\nEnter current hour: ";
    cin >> h;

    cout << "Enter current minute: ";
    cin >> m;

    // amenamoty

    int nearest = -1;

    for (int i = 0; i < N; i++)
    {
        if (ch[i].get_hour() > h ||
           (ch[i].get_hour() == h &&
            ch[i].get_minute() > m))
        {
            if (nearest == -1 ||
                ch[i].get_hour() < ch[nearest].get_hour() ||
               (ch[i].get_hour() == ch[nearest].get_hour() &&
                ch[i].get_minute() < ch[nearest].get_minute()))
            {
                nearest = i;
            }
        }
    }

    cout << "\n NEAREST FLIGHT" << endl;

    if (nearest == -1)
        cout << "No upcoming flights!" << endl;
    else
        ch[nearest].get();

    //  Checking flights

    cout << "\nCHECKING ALL FLIGHTS" << endl;

    for (int i = 0; i < N; i++)
    {
        check(h, m, &ch[i]);
        cout << "---------------" << endl;
    }

    delete[] ch;

    return 0;
}
