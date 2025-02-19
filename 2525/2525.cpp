#include <iostream>

int main()
{
    int hour, minute, needTime;

    std::cin >> hour >> minute >> needTime;

    int totalMinute = hour * 60 + minute + needTime;
    int newHour = (totalMinute / 60) % 24;
    int newMinute = totalMinute % 60;

    std::cout << newHour << " " << newMinute << "\n";

    /*if (minute + needTime >= 60)
    {
        int newHour = ((minute + needTime) / 60);
        int newMinute = ((minute + needTime) % 60);

        if (hour + newHour < 24)
        {
            std::cout << hour + newHour << " " << newMinute << "\n";
        }
        else
        {
            std::cout << hour + newHour - 24 << " " << newMinute << "\n";
        }
    }
    else
    {
        std::cout << hour << " " << minute + needTime << "\n";
    }*/
    return 0;
}