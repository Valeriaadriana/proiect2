#pragma once
class RoomRepository : public Repository<Room>
{
public:
	RoomRepository() {}
	
	Room* findByName(const std::string& room_name);
};