#include "Activity.h"

Activity::Activity(Room *room, Person *person, std::string description)
{
    mLocation = room;
    mOwner = person;
    mDescription = description;
}

Room* Activity::getRoom() const
{
    return mLocation;
}

Person* Activity::getOwner() const
{
    return mOwner;
}

std::string Activity::getDescription() const
{
    return mDescription;
}

std::istream& operator >> (std::istream& stream, Activity& p)
{
    std::cin >> *dynamic_cast<Room*>(p.mLocation);
    std::cin >> *dynamic_cast<Person*>(p.mOwner);
    std::cin >> p.mDescription;
    return stream;
}

std::ostream& operator << (std::ostream& stream, const Activity& p)
{
    std::cout << p.mDescription << " - ";
    std::cout << *dynamic_cast<Room*> (p.mLocation);
    std::cout << *dynamic_cast<Person*> (p.mOwner);
    return stream;
}
