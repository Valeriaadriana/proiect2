#pragma once
class TeacherRole : public Role
{
public:
	 TeacherRole(const std::vector<std::string> = {});

	friend std::ostream& operator<<(std::ostream& out, TeacherRole& teacher);
private:
	std::vector<std::string> m_Courses;
}