#include "Account.h"

Account::Account(Customer customer, int accountNumber)
{
	_accountOwner = customer;
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
