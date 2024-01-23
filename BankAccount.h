#pragma once
#include <string>
using namespace std;

class BankAccount
{
private:
	string clientName="Not Set yet";
	char currency='$';
	float balance=0.0;

public:
	void setClientName(string name);
	string getClientName();

	void setCurrency(char c);
	char getCurrency();

	float getBalance();

	void PrintAccountInfo();

	void withdraw(float amount);
	void deposit(float amount);

	BankAccount();

	BankAccount(string name, float b, char c);



};

