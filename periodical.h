#ifndef PERIODICAL_H
#define PERIODICAL_H

#include "entity.h"
#include <string>

using namespace std;

//-----------------------------------------------------------------------------
//
// Periodical class: a type of Entity which is a periodical (newsletter,
//                   magazine, etc.)
// 
// Implementation and assumptions:
//  -- derived from Entity class so inherits Entity's members and methods
//     and implements these
//  -- additionally has a data member for the periodical's title
//-----------------------------------------------------------------------------

class Periodical : public Entity {
public:
// Constructor, default parameter for totalCopies
    Periodical(string, Date, int=1);
// Sets title data member to parameter
    void setTitle(string);
// Returns Periodical's title
    string getTitle();
// > operator for comparison with other Periodical objects
    bool operator>(const Periodical&) const;
// < operator for comparison with other Periodical objects
    bool operator<(const Periodical&) const;
// >= operator for comparison with other Periodical objects
    bool operator>=(const Periodical&) const;
// <= operator for comparison with other Periodical objects
    bool operator<=(const Periodical&) const;
// == operator for comparison with other Periodical objects
    bool operator==(const Periodical&) const;
// Outputs the object to command line
    void display() const;
private:
    string title;   // The periodical's title
};

#endif