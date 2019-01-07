#pragma once
#include <iostream>
#include <string>

class University_Room {

public:
	enum RoomType {
		Amphitheatre_ROOM,
		Laboratory_ROOM,
		Seminary_ROOM
	};

	Room(const std::string, const unsigned int, );


	const std::string getName() const;
	const unsigned int getNrPlaces() const;
	const bool Free() const;
	


protected:
		
	std::string m_Name;
	unsigned int m_NrPlaces;
	
};

