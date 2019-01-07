// universityroom.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


University_Room::Room(std::string name, unsigned int NrPlaces, ) :m_Name(name),m_Capacity(capacity),m_Free(true)



const std::string University_Room::getName() const
{
	return m_Name;
}

const unsigned intUniversity_Room::getNrPlaces() const
{
	return m_NrPlaces;
}



const bool University_Room::Free() const
{
	return m_Free;
}


