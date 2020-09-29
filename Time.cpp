#include <iostream>
#include "Time.h"

Time::Time(float hours_, float minutes_)
    {
        hours = hours_;
        minutes = minutes_;
    }


Time::Time ()
    {
        hours = 0;
        minutes = 0;
    }


Time::Time (const Time & T1)
    {
        hours = T1.hours;
        minutes = T1.minutes;
    }


Time Time & operator=(const Time & T2)
    {
        if (&T2 != this)
        {
            hours = T2.hours;
            minutes = T2.minutes;
        }

        return *this;
    }


Time Time::operator+(Time a)
    {
        Time sum;

        sum.hours = hours + a.hours;
        sum.minutes = minutes + a.minutes;

        do
        {
        sum.hours++;
        sum.minutes = sum.minutes - 60;
        } while (sum.minutes/60 >= 1);

        return Time(sum.hours, sum.minutes);
    }

