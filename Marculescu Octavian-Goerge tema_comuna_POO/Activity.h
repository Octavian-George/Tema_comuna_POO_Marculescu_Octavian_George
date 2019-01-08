#ifndef ACTIVITY_H_INCLUDED
#define ACTIVITY_H_INCLUDED
#include <string>
#include "Room.h"
#include "Person.h"

class Activity
{
private:
    Room* mLocation;
    Person* mOwner;
    std::string mDescription;

public:
    Activity(Room*, Person*, std::string);

    Room* getRoom() const;
    Person* getOwner() const;
    std::string getDescription() const;

    friend std::istream& operator >> (std::istream& stream, Activity& p);
    friend std::ostream& operator << (std::ostream& stream, const Activity& p);

};

#endif // ACTIVITY_H_INCLUDED
