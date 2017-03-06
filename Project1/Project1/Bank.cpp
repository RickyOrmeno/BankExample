#include "Bank.h"



Bank::Bank()
{
}


Bank::Bank(std::string name)
{
	_name = name;
}

Bank::~Bank()
{
}

std::string Bank::getName()
{
	return _name;
}
