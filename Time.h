#include <iostream>
#pragma once

using namespace std;

class Time
{
private:

    float hours;
    float minutes;

public:

    friend ostream & operator<<(ostream &OP, const Time &P4);
    friend Time operator*(Time copy_, double number);
    friend Time operator*(double number, Time copy_);

    Time (float hours_, float minutes_);

    Time ();

    Time (const Time & T1);

    Time & operator=(const Time & T2);

    Time operator+(Time a);
};

 /*Time operator*(Time copy_, double number)
    {
        Time result;

       result.hours = copy_.hours * number;
       result.minutes = copy_.minutes * number;

        return result;
    }

 Time operator*(double number, Time copy_)
    {
        Time result2;

       result2.hours = copy_.hours * number;
       result2.minutes = copy_.minutes * number;

        return result2;
    }
    */
