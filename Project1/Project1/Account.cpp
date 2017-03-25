#include "Account.h"

Account::Account(Customer customer, int accountNumber) : _accountOwner(customer) //DO THIS INLINE TO DEFINE CLASSES TO ELIMINATE DEFAULT CONSTRUCTOR ERRORS
{
	_accountNumber = accountNumber;
}

Account::~Account()
{
}

void Account::Deposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
	_log.push_back("You added " + std::to_string(numberOfPennies) + "to your account.");
	//TODO: Add a message to the log
}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
	_log.push_back("You withdrew " + std::to_string(numberOfPennies) + "from your account.");
}

int Account::getBalance()
{
	return 0;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}

std::string Account::showLog()
{
	for (auto message : _log)
	{
		return message;
	};
}

