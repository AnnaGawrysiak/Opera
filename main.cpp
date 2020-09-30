// Klasa powinna zawieraæ metodê resetuj¹c¹, metodê pozwalaj¹c¹ ustawiæ dowoln¹ godzinê

#include <iostream>
#include "Time.h"

using namespace std;

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
