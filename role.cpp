// role.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



Role::Role(RoleType type) : m_Type(type)


const Role::RoleType Role::getType() const
{
	return m_Type;
}