#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

template<class Posibility>
class Repository
{
public:
	Repository() {}
	~Repository() {
		for (int i = 0; i < m_Posibilities.size(); i++)
			delete m_Posibilities[i];
	}
	void remove(Posibility* Posibility) {
		m_Posibilities.erase(std::remove(m_Posibilities.begin(), m_Posibilities.end(), posibility), m_Posibilities.end());
	}
	void add(Posibility* Posibility) {
		m_Posibility.push_back(Posibility);
	}

protected:
	std::vector<Posibility *>m_Posibilities;
};
