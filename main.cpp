// Klasa powinna zawieraæ metodê resetuj¹c¹, metodê pozwalaj¹c¹ ustawiæ dowoln¹ godzinê

#include <iostream>
#include "Time.h"

using namespace std;

class Time
{
private:

    float hours;
    float minutes;

public:

    Time (float hours_, float minutes_)
    {
        hours = hours_;
        minutes = minutes_;
    }

    Time ()
    {
        hours = 0;
        minutes = 0;
    }

    Time (const Time & T1)
    {
        hours = T1.hours;
        minutes = T1.minutes;
    }

    Time & operator=(const Time & T2)
    {
        if (&T2 != this)
        {
            hours = T2.hours;
            minutes = T2.minutes;
        }

        return *this;
    }

    Time operator+(Time a)
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

    friend ostream & operator<<(ostream &OP, const Time &P4);
    friend Time operator*(Time copy_, double number);
    friend Time operator*(double number, Time copy_);
};

 Time operator*(Time copy_, double number)
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

ostream & operator<<(ostream &OP, const Time &opera)
{
    cout << opera.hours << ", " << opera.minutes;

    return OP;
}

int main()
{
    using std::cout;
    using std::endl;

    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida i Tosca" << endl;
    cout << aida << "; " << tosca << endl;

    temp = aida + tosca;
    cout << "Aida + Tosca = " << temp << endl;

    temp = aida * 1.17;
    cout << "Aida * 1.17 = " << temp << endl;

    temp = 10.0 * tosca;
    cout << "10.0 * Tosca = " << temp << endl;


    return 0;
}
