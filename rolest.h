#pragma once

#include <iostream>

#include <string>


class StudentRole : public Role {

public:
	StudentRole(const int = 0, const std::string = "", );
	const int getGroup() const;
    void addDiscipline(Discipline*);
    const int getGroup() const;
	


private:

	std::string m_Specialization;
	int m_Group;
};