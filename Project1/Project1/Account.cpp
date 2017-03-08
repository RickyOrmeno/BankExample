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
	//TODO: Add a message to the log
}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
	//TODO: Add a message to the log
}

int Account::getBalance()
{
	return 0;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}

