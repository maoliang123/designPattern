#include <iostream>
#include <list>
#include <vector>

class company
{
public:
	company(const std::string& str);
	virtual ~company();
	virtual void add();
	virtual void show();
private:
	std::string name;
};

class financeDepartment : public company
{
public:
	financeDepartment(const std::string& str);
	~financeDepartment();
	void show();
};


class hrDepartment : public company
{
public:
	hrDepartment(const std::string& str);
	~hrDepartment();
	void show();
};

class concreteCompany : public company
{
public:
	concreteCompany(std::string& str);
	~concreteCompany();
	void add(company* c);
	void show();
private:
	std::list<company*> m_pListCompany;
};