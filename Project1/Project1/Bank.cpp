#include "Bank.h"


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

void Bank::CreateAccount(Account newAccount)
{
	_accounts.push_back(newAccount);		//HOW TO ADD TO A VECTOR
}

std::string Bank::ShowAccounts()
{
	std::string output = "Accounts for " + _name + "\n";
	for (auto account : _accounts)	//search
	{
		output += std::to_string(account.getAccountNumber()) += "\n";
	}
	return output;
}

std::string Bank::ListAccounts()
{
	std::string output = "Accounts for " + _name + "\n";
	int index = 0;
	for (auto account : _accounts)	//search
	{
		output += std::to_string(account.getAccountNumber()) += "\n";
		index++;
	}
	return output;
}

void Bank::Deposit(int accountNumber, int amount)
{
	for (Account account : _accounts)
	{
		if (account.getAccountNumber() == accountNumber)
		{
			account.Deposit(amount);
		
		}
	}
}

void Bank::Withdraw(int accountNumber, int amount)
{
	for (Account account : _accounts)
	{
		if (account.getAccountNumber() == accountNumber)
		{
			account.Withdraw(amount);
		
		}
	}
}
