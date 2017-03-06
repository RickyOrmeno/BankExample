#pragma once		//prevents bloated code by not letting the compiler include the same files like "include string"

#include <string>

class Customer
{
private:
	std::string _firstName;			//UNDERSCORE BEFORENAME IS INDUSTRY STANDARD
	std::string _lastName;
public:
	Customer(std::string firstName, std::string lastName);
	~Customer();

	std::string getFullName();
};

