#ifndef CHILDRENSBOOK_H
#define CHILDRENSBOOK_H

#include "date.h"
#include "entity.h"
#include <string>

using namespace std;

//-----------------------------------------------------------------------------
//
// ChildrensBook class: a type of Entity which is a story book for children
// 
// Implementation and assumptions:
//  -- derived from Entity class so inherits Entity's members and methods
//     and implements these
//  -- additionally has data members for the book's author and title
//-----------------------------------------------------------------------------

class ChildrensBook : public Entity {
public:
// Constructor, default parameter for totalCopies
    ChildrensBook(string, string, Date, int=5);
// Returns author member;
    string getAuthor();
// Returns title member
    string getTitle();
// > operator for comparison with other ChildrensBook objects
    bool operator>(const ChildrensBook&) const;
// < operator for comparison with other ChildrensBook objects
    bool operator<(const ChildrensBook&) const;
// >= operator for comparison with other ChildrensBook objects
    bool operator>=(const ChildrensBook&) const;
// <= operator for comparison with other ChildrensBook objects
    bool operator<=(const ChildrensBook&) const;
// == operator for comparison with other ChildrensBook objects
    bool operator==(const ChildrensBook&) const;
// Outputs the object to command line
    void display() const;
private:
    string author;  // The book's author
    string title;   // The book's title
};

#endif