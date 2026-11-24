
#include <iostream>
#include "airplane.h"

using namespace std;

void Airplane::set()
{
    cout << "Enter direction";
    cin >> dir;

    cout << "Enter departure hour";
    cin >> hour;

    cout << "Enter departure minute";
    cin >> minute;
}

void Airplane::get()
{
    cout << dir << " flight is leaving at "
         << hour << ":" << minute << endl;
}

int Airplane::get_hour()
{
    return hour;
}

int Airplane::get_minute()
{
    return minute;
}
