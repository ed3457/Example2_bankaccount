#include "BankAccount.h"
#include <iostream>
using namespace std; 
void BankAccount::setClientName(string name)
{
	clientName = name; 

}

string BankAccount::getClientName()
{
	return clientName;
}

void BankAccount::setCurrency(char c)
{
	currency = c;
}

char BankAccount::getCurrency()
{
	return currency;
}

float BankAccount::getBalance()
{
	return balance;
}

void BankAccount::PrintAccountInfo()
{
	cout << "Client Name:" << clientName<<endl;
	cout << "Balance:" << balance << endl;
	cout << "Currency:" << currency << endl;
}

void BankAccount::withdraw(float amount)
{
	balance = balance - amount;

}

void BankAccount::deposit(float amount)
{
	balance = balance + amount;
}

BankAccount::BankAccount()
{
	setClientName("not set yet");
	setCurrency('$');
	balance = 0;
}

BankAccount::BankAccount(string name, float b, char c)
{
	setClientName(name);
	setCurrency(c);
	balance = b;
}
