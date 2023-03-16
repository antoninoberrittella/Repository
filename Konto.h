#pragma once
#include<iostream>
#include<string>
using namespace std;
//Header etc fuer Nutzung von strings etc
class Konto
{
private:
	string customerName;
	string accountNumber;
	double balance;

public:
	void set_Kunde(string Kontoinhaber, string Kontonummer, double Saldo);
	void deposit(double value);
	void payoff(double value);
	const void display();
	Konto();
	~Konto();
};
