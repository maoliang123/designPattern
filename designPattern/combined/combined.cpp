#include "combined.h"

company::company(const std::string& str)
{
	name = str;
};

company::~company()
{

};

void company::add()
{

};

void company::show()
{

};

financeDepartment::financeDepartment(const std::string& str) : 
	company(str)
{

};

financeDepartment::~financeDepartment()
{

};

void financeDepartment::show()
{
	std::cout << "this is financeDepartment" << std::endl;
};

hrDepartment::hrDepartment(const std::string& str) :
	company(str)
{

};

hrDepartment::~hrDepartment()
{

};

void hrDepartment::show()
{
	std::cout << "this is hrDepartment" << std::endl;
};

concreteCompany::concreteCompany(std::string& str) :
	company(str)
{

};

concreteCompany::~concreteCompany()
{
	for (std::list<company*>::iterator it = m_pListCompany.begin(); it != m_pListCompany.end(); it++)
	{
		delete (*it);
	}
};

void concreteCompany::add(company* c)
{
	m_pListCompany.push_back(c);
};

void concreteCompany::show()
{
	for (std::list<company*>::const_iterator it = m_pListCompany.begin(); it != m_pListCompany.end(); it++)
	{
		(*it)->show();
	}
};