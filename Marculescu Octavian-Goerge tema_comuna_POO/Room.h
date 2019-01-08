#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED
#include<string>

class Room
{
private:
    std::string mName;

public:
    Room(std::string);
    std::string getName();

    friend std::istream& operator>> (std::istream& stream, Room& p);
    friend std::ostream& operator<< (std::ostream& stream, const Room& p);


};

#endif // ROOM_H_INCLUDED
