// person.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


Person::Person(const std::vector<Role>& roles, const std::vector CNP , const std::string& lastname, const std::string& firstname,  const std::vector CNP, const std::string& email):m_CNP(CNP), m_LastName(lastname), m_FirstName(firstname), m_Email(email), m_Roles(roles)



const std::string & Person::getLastName() const
{
	return m_LastName;
}


const std::string & Person::getFirstName() const
{
	return m_FirstName;
}


bool Person::Student()
{
	for (Role:Role1 m_Roles)
		if (Role1->getRole() == Role::Student_Role)
			return true;
	return false;
}

bool Person::Teacher()
{
	for (Role& Role2 : m_Roles)
		if (Role2->getRole() == Role::Teacher_Role)
			return true;
	return false;
}


const std::vector CNP ::getCNP() const
{
	return m_CNP;
}
const std::string & Person::getEmail() const
{
	return m_Email;
}


std::istream& operator>>(std::istream &out, Person &pers)
{
	std::string cnp;
	
	out >> cnp >> pers.m_LastName >> pers.m_FirstName >>  pers.m_Email;
	return out;
}

