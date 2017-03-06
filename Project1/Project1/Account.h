#pragma once
#include "Customer.h"

class Account
{
private:
	int _accountNumber;
	int _balanceInPennies = 0;
	Customer _accountOwner;
public:
	Account(Customer customer, int accountNumber);
	~Account();

	void deposit(int numberOfPennies);
	void withdraw(int numberOfPennies);
	int getBalance();

};

