// disciplina.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


Discipline::Discipline(const std::string & subject, const Discipline type, const std::string& specialization) :m_Subject(subject),m_Type(type),
	m_Specialization(specialization)
	void Discipline::addGrade(const int grade)
{
	m_Grades.push_back(grade);
}
const std::string Discipline::getSubject() const
{
	return m_Subject;
}
const std::string Discipline::getSpecialization() const
{
	return m_Specialization;
}

const int Discipline::getGroup() const
{
	return m_Group;
}

std::vector<int> Discipline::getGrades() const
{
	return m_Grades;
}