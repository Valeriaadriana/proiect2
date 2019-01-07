#pragma once
class Activity {

public:
	Activity(Room*, Person*, const std::string);
	

	const std::string getDescr()const;
	Room* getLocation() const;

protected:
	Room* m_Location;
	std::string m_Descr;
	Person* m_User;
	
};
class Activity2 {
public:
	Activity2(Person*);

	void addGrade(const int);
	
	const Person* getPerson() const;
	const int getGrade() const;
	

private:
	Person* m_Person;

	int m_Grade;
	

};