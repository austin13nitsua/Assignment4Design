#ifndef ENTITY_H
#define ENTITY_H

#include "patron.h"
#include "date.h"

//-----------------------------------------------------------------------------
//
// Entity class: base class for an object/item storable in a library
// 
// Implementation and assumptions:
//  -- every Entity object has a date of release/publication
//  -- every Entity object has data members to keep track of the amount of
//     copies in a library and the number of copies that have been checked out
//  -- every Entity object has an array of Patrons who have checked out a copy
//     of the object
//  -- assumes derived classes implement the methods of this class
//-----------------------------------------------------------------------------

class Entity {
public:
// Default constructor
    Entity();
// Destructor
    ~Entity();
// > operator for comparison with other Entity objects
    bool operator>(const Entity&) const = 0;
// < operator for comparison with other Entity objects
    bool operator<(const Entity&) const = 0;
// >= operator for comparison with other Entity objects
    bool operator>=(const Entity&) const = 0;
// <= operator for comparison with other Entity objects
    bool operator<=(const Entity&) const = 0;
// == operator for comparison with other Entity objects
    bool operator==(const Entity&) const = 0;
// Outputs the object to command line
    void display() const = 0;
    
protected:
    int numCheckedOut;  // How many copies of the item are currently checked
                        // out
    int totalCopies;    // How many copies of the item exist in the system
    Patron* checkedOut; // Array of Patrons who have checked out the item
    Date date;          // Date the item was released/published
};

#endif