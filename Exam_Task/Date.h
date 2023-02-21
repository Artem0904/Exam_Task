#pragma once
#include"Lib.h"
struct Date
{
    int year;
    int mon;
    int day;
    Date(int day, int mon, int year)
        :day(day), mon(mon), year(year)
    {}
    void printDate() const
    {
        if (day > 0 && day < 10)
            cout << "0" << day;
        else
            cout << day;
        cout << ".";
        if (mon > 0 && mon < 10)
            cout << "0" << mon;
        else
            cout << mon;
        cout << ".";
        cout << year;
        cout << endl;
    }
};

