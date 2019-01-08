#include <iostream>
#include "Room.h"

Room::Room(std::string name)
{
    mName = name;
}

std::string Room::getName()
{
    return mName;
}

std::istream& operator>> (std::istream& stream, Room& p)
{
    std::cin >> p.mName;
    return stream;
}

std::ostream& operator<< (std::ostream& stream, const Room& p)
{
    std::cout << p.mName <<'\n';
    return stream;
}
