// roomrepoditory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


Room * RoomRepository::findByName(const std::string & room_name)
{
	for (Room* each_room : m_Posibilities)
		if (every_room->getName() == room_name)
			return every_room;
	