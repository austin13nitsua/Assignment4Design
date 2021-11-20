#ifndef CHILDRENSBOOK_H
#define CHILDRENSBOOK_H

#include "entity.h"
#include <string>

using namespace std;

class ChildrensBook : public Entity {
public:
    ChildrensBook(string, string, Date);
    ~ChildrensBook();
    bool operator>(const ChildrensBook&) const;
    bool operator<(const ChildrensBook&) const;
    bool operator>=(const ChildrensBook&) const;
    bool operator<=(const ChildrensBook&) const;
    bool operator==(const ChildrensBook&) const;
    void display() const;
private:
    string author;
    string title;
};

#endif