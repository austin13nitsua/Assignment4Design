#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

#include "entity.h"
#include <string>

using namespace std;

class FictionBook : public Entity {
public:
    FictionBook(string, string, Date);
    ~FictionBook();
    bool operator>(const FictionBook&) const;
    bool operator<(const FictionBook&) const;
    bool operator>=(const FictionBook&) const;
    bool operator<=(const FictionBook&) const;
    bool operator==(const FictionBook&) const;
    void display() const;
private:
    string author;
    string title;
};

#endif