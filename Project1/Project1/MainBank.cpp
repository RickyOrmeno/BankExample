#include <iostream>
#include "Bank.h"


using namespace std;

Bank bank = Bank("Awesome Bank");

void DisplayMenu();
void TransactMenu();
void AddAccountMenu();
void DisplayAccountsMenu();

int main()
{
	DisplayMenu();

	system("pause");

	return 0;
}

void DisplayMenu()
{
	int choice = 0;
	do
	{
		system("cls");
		cout << "Welcome to " << bank.getName() << endl;
		cout << "1) Add Account " << endl;
		cout << "2) Transact " << endl;
		cout << "3) Display Accounts " << endl;
		cout << "What would you like to do? " << endl;

		cin >> choice;

		switch (choice)
		{
		case 1: AddAccountMenu(); break;
		case 2: TransactMenu(); break;
		case 3: DisplayAccountsMenu(); break;
		default: break;

		}
	} while (choice != 10);
	
}

void AddAccountMenu()
{
	system("cls");
	cout << "Customer first name: ";			
	string firstName;							//This declaration is his style preference
	cin >> firstName;

	cout << "Customer last name: ";
	string lastName;
	cin >> lastName;

	cout << "Account Number: ";
	int accountNumber;
	cin >> accountNumber;

	Customer customer = Customer(firstName, lastName);
	Account newAccount = Account(customer, accountNumber);

	bank.CreateAccount(newAccount);
}

void DisplayAccountsMenu()
{
	system("cls");
	cout << bank.ShowAccounts();
	system("pause");
}

void TransactMenu()
{
	system("cls");

	cout << "Which Account?" << endl;
	cout << bank.ListAccounts() << endl;
	system("cls");

	int chosenAccount;
	cin >> chosenAccount;

	system("cls");
	cout << "1) Deposit" << endl;
	cout << "2) Withdraw" << endl;

	int transactionType;
	cin >> transactionType;

	system("cls");
	cout << "How many Pennies? ";
	int pennies;
	cin >> pennies;

	switch (transactionType)
	{
	case 1: bank.Deposit(chosenAccount, pennies); break;
	case 2: bank.Withdraw(chosenAccount, pennies); break;
	default: break;

	}


}