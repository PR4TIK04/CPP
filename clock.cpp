#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Get current time
    time_t currentTime = time(0);
    struct tm* localTime = localtime(&currentTime);

    // Extract individual components
    int hour = localTime->tm_hour;
    int min = localTime->tm_min;
    int sec = localTime->tm_sec;

    // Display time
    cout << "Current Time: ";
    cout << hour << ":" << min << ":" << sec << endl;

    // Get current date
    int day = localTime->tm_mday;
    int month = localTime->tm_mon + 1; // Month starts from 0
    int year = localTime->tm_year + 1900; // Year is relative to 1900

    // Display date
    cout << "Current Date: ";
    cout << day << "/" << month << "/" << year << endl;

    return 0;
}
