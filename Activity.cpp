// Activity.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



Activity::Activity(Room *location,Person *user, std::string descr) :m_Descr(descr),m_Location(location),m_User(User)

	


const std::string Activity::getDescr() const
{
	return m_Descr;
}

Room * Activity::getLocation() const
{
	return m_Location;
}

Activity2::Activity2(Person * person) : m_Person(person)
   




void Activity2::isPresent()
{
	m_Presence = true;
}
const int Activity2::getGrade() const
{
	return m_Grade;
}

const Person * Activity2::getPerson() const
{
	return m_Person;
}
void Activity2::addGrade(const int grade)
{
	m_Grade = grade;
}

