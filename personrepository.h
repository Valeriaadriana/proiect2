#pragma once
class PersonR : public Repository<Person>
{
public:
	PersonR() {}
	Person* FindByFullName(const std::string& first_name, const std::string& last_name);
	Person* FindByCNP(const std::vector CNP CNP);
};