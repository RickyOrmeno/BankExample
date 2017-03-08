#include "Account.h"

Account::Account(Customer customer, int accountNumber) : _accountOwner(customer) //DO THIS INLINE TO DEFINE CLASSES TO ELIMINATE DEFAULT CONSTRUCTOR ERRORS
{
	_accountNumber = accountNumber;
}

Account::~Account()
{
}

void Account::deposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
}

void Account::withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
}

int Account::getBalance()
{
	return 0;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}

