#ifndef ROOMREPOSITORY_H_INCLUDED
#define ROOMREPOSITORY_H_INCLUDED

#include<vector>
#include "Room.h"
#include "Repository.h"


class RoomRepository : public Repository<Room>
{
public:
	Room* findByName(std::string);
};


#endif // ROOMREPOSITORY_H_INCLUDED
