// rolest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


StudentRole::StudentRole(int group, std::string specialization) :Role(STUDENT_ROLE), m_Discipline(discipline),m_Specialization(specialization)
m_Discipline(discipline)




const int StudentRole::getGroup() const
{
	return m_Group;
}
void StudentRole::addDiscipline(Discipline *discipline)
{
	m_Disciplines.push_back(discipline);
}
