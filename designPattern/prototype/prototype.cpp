#include "prototype.h"

void resumeInterface::fillPersonInformation()
{
	setPresonId();
	setPersonName();
};

resume::resume()
{
	m_str = "ok";
};

resume::resume(const resume& r)
{
	m_str = r.m_str;
};

resume* resume::clone()
{
	return new resume(*this);
};

std::string resume::getStr()
{
	return m_str;
};

void resume::setStr(const std::string& str)
{
	m_str = str;
};

void resume::setPresonId()
{
	std::cout << "this resume presonId" << std::endl;
};

void resume::setPersonName()
{
	std::cout << "this resume personName" << std::endl;
};