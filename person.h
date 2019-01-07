#pragma once

#include <string>
#include <vector>

class Person
{
public:
	
	Person(const std::vector<Role>& roles, const std::vector CNP, const std::string& lastname, const std::string& firstname, const std::vector CNP, const std::string& email) 

	const std::string& getLastName() const;
	const std::string& getFirstName() const;
	const std::vector CNP getCNP() const;
    bool Student();
	bool Teacher();
    friend std::istream& operator>>(std::istream&, Person&);
	

private:
	const std::vector CNP m_CNP;
	std::string  m_LastName, m_FirstName, m_Email;
	
};