#include <iostream>

class resumeInterface
{
protected:
	std::string m_str;
	virtual void setPresonId() {};
	virtual void setPersonName() {};
public:
	resumeInterface() {};
	resumeInterface* clone() {};
	std::string getStr() {};
	void setStr(const std::string& str) {};
	void fillPersonInformation();
};

class resume : public resumeInterface
{
public:
	resume();
	resume(const resume& r);
	resume* clone();
	std::string getStr();
	void setStr(const std::string& str);
protected:
	void setPresonId();
	void setPersonName();
};