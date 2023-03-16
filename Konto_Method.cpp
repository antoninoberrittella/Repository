#include<iostream>
#include<string>
#include"Konto.h"
using namespace std;

void Konto::set_Kunde(string Kontoinhaber, string Kontonummer, double Saldo)
{
	customerName = Kontoinhaber;
	accountNumber = Kontonummer;
	balance = Saldo;
}
void Konto::deposit(double value)
{
	balance = balance + value;
}
void Konto::payoff(double value)
{
	balance = balance - value;
}
const void Konto::display()
{
	cout << "Kontoinhaber: " << customerName << "\n";
	cout << "Kontonummer: " << accountNumber << "\n";
	cout << "Saldo: " << balance << "\n";
	//Ausgabe der Atribute
}
Konto::Konto()
{
	customerName = "0";;
	accountNumber = "0";;
	balance = 0;
}
Konto::~Konto()
{

}