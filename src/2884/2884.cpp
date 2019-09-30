#include <iostream>

using namespace std;

void printAlaramTime(int hour, int min)
{
    cout << hour << " " << min << endl;
}

int main(void)
{
    const int MAX_HOUR = 24;
    const int MAX_MIN = 60;

    int hour, min;
    cin >> hour >> min;
    min -= 45;

    if (min >= 0)
    {
        printAlaramTime(hour, min);
    }
    else
    {
        min += MAX_MIN;
        hour -= 1;
        if (hour <= 0)
        {
            hour += MAX_HOUR;
            printAlaramTime(hour, min);
        }
        else
        {
            printAlaramTime(hour, min);
        }
    }
}