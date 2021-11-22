#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

#include "entity.h"
#include <string>

using namespace std;

//-----------------------------------------------------------------------------
//
// FictionBook class: a type of Entity which is a novel
// 
// Implementation and assumptions:
//  -- derived from Entity class so inherits Entity's members and methods
//     and implements these
//  -- additionally has data members for the book's author and title
//-----------------------------------------------------------------------------

class FictionBook : public Entity {
public:
// Constructor, default parameter for totalCopies
    FictionBook(string, string, Date, int=5);
// Sets author member to parameter
    void setAuthor(string);
// Sets title member to parameter
    void setTitle(string);
// Returns the author
    string getAuthor();
// Returns the Title
    string getTitle();
// > operator for comparison with other FictionBook objects
    bool operator>(const FictionBook&) const;
// < operator for comparison with other FictionBook objects
    bool operator<(const FictionBook&) const;
// >= operator for comparison with other FictionBook objects
    bool operator>=(const FictionBook&) const;
// <= operator for comparison with other FictionBook objects
    bool operator<=(const FictionBook&) const;
// == operator for comparison with other FictionBook objects
    bool operator==(const FictionBook&) const;
// Outputs the object to command line
    void display() const;
private:
    string author;  // The book's author
    string title;   // The book's title
};

#endif