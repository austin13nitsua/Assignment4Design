#ifndef PERIODICAL_H
#define PERIODICAL_H

#include "entity.h"
#include <string>

using namespace std;

class Periodical : public Entity {
public:
    bool operator>(const Periodical&) const;
    bool operator<(const Periodical&) const;
    bool operator>=(const Periodical&) const;
    bool operator<=(const Periodical&) const;
    bool operator==(const Periodical&) const;
    void display() const;
private:
    string title;
};

#endif