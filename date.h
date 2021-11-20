#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
public:
    Date(int, string, int);
    string Display();
    int getDay();
    int getMonth();
    int getYear();
private:
    int day;
    string month;
    int year;
};

#endif