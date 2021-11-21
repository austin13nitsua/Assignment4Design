#ifndef DATE_H
#define DATE_H

#include <string>

//-----------------------------------------------------------------------------
//
// Date class: holds the date (day, month, year) that a entity was released
//             or published
// 
// Implementation and assumptions:
//  -- holds day as an integer, so single digit days have no leading 0
//  -- holds month as a string not an integer
//  -- does not assume the full date is always known
//-----------------------------------------------------------------------------

class Date {
public:
// Default constructor, creates Date without any values
    Date();
// Sets day to parameter
    void setDay(int);
// Sets month to parameter
    void setMonth(string);
// Sets year to parameter
    void setYear();
// Returns day
    int getDay();
// Returns month
    string getMonth();
// Returns Year
    int getYear();

private:
    int day;        // date
    string month;   // month
    int year;       // year
};

#endif