// person repository.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


Person* PersonR::FindByCNP(const std::vector CNP CNP)
{
	for (Person* person : m_Posibilities)
		if (person->getCNP() == CNP)
			return person;

}
Person* Persone::FindByFullName(const std::string & first_name, const std::string & last_name)
{
	for (Person*& person : m_Posibilities)
		if (person->getFirstName() == first_name && person->getLastName() == last_name)
			return pers;
	return nullptr;
}
\