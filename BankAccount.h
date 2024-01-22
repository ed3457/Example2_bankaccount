#pragma once
#include <string>
using namespace std;

class BankAccount
{
private:
	string clientName;
	char currency;
	float balance;

public:
	void setClientName(string name);
	string getClientName();

	void setCurrency(char c);
	char getCurrency();

	float getBalance();

	void PrintAccountInfo();

	void withdraw(float amount);
	void deposit(float amount); 



};

