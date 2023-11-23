#include <iostream>
using namespace std;

string getDayOfWeek(int year, int nth_day) {
    // January 1st of the given year
    int jan_first_day = year % 7; // 0 is Sunday, 1 is Monday, ..., 6 is Saturday

    // Calculate the day of the week for the nth day in the year
    int day_of_week = (jan_first_day + nth_day - 1) % 7;

    // Array of days in a week
    string days[] = {"Sun", "Mon", "Tues", "Wed", "Thurs", "Fri", "Sat"};

    return days[day_of_week];
}

int main() {
    int year, nth_day;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the nth day: ";
    cin >> nth_day;

    string day_of_week = getDayOfWeek(year, nth_day);
    cout << "The " << nth_day << "th day in " << year << " is a " << day_of_week << "." << endl;

    return 0;
}
