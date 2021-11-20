#ifndef ENTITY_H
#define ENTITY_H

#include "patron.h"
#include "date.h"

class Entity {
public:
    Entity() = 0;
    ~Entity() = 0;
    bool operator>(const Entity&) const = 0;
    bool operator<(const Entity&) const = 0;
    bool operator>=(const Entity&) const = 0;
    bool operator<=(const Entity&) const = 0;
    bool operator==(const Entity&) const = 0;
    void display() const = 0;
    
protected:
    int numCheckedOut;
    int totalCopies;
    Patron* checkedOut; // Array of Patron objects
    Date date;
};

#endif