#include<iostream>
#include"Konto.h"
using namespace std;

int main()
{
	Konto Konto1;
	//Instanzierung des Girokontos
	bool Check = 0;
	bool Entscheidung = 0;
	double Betrag = 0;
	//Interaktionsvariablen
	Konto1.set_Kunde("Peter Mustermann", "KN001", 79.17);
	//Erstes Konto wird beschrieben

	do {
		Entscheidung = 0;
		cout << "Um Geld einzuzahlen bitte 1 eingeben:\n";
		cin >> Entscheidung;
		if (Entscheidung == 1)
		{
			cout << "Bitte geben Sie den gewollten Betrag ein:\n";
			Betrag = 0;
			cin >> Betrag;
			Konto1.deposit(Betrag);
			Konto1.display();
		}
		else
		{
			cout << "Keine Einzahlung...\n";
		}
		//Einzahlung

		Entscheidung = 0;
		cout << "\nUm Geld auszuzahlen bitte 1 eingeben:\n";
		cin >> Entscheidung;
		if (Entscheidung == 1)
		{
			cout << "Bitte geben Sie den gewollten Betrag ein:\n";
			Betrag = 0;
			cin >> Betrag;
			Konto1.payoff(Betrag);
			Konto1.display();
		}
		else
		{
			cout << "Keine Auszahlung...\n";
		}
		//Auszahlung

		cout << "\nZum beenden des Programmes bitte die 0 eingeben, andernfalls bitte die 1 eingeben.\n";
		cin >> Check;
	} while (Check == 1);
	//Abbruch

	cout << "\nZum Erstellen eines Festgeldkontos bitte die 1 eingeben:\n";
	cin >> Entscheidung;
	if (Entscheidung == 1)
	{
		Konto Konto2;
		Konto2.set_Kunde("Peter Mustermann", "KN001", 79.17);
		do {
			Entscheidung = 0;
			cout << "\nUm Geld einzuzahlen bitte 1 eingeben:\n";
			cin >> Entscheidung;
			if (Entscheidung == 1)
			{
				cout << "Bitte geben Sie den gewollten Betrag ein:\n";
				Betrag = 0;
				cin >> Betrag;
				Konto2.deposit(Betrag);
				Konto2.display();
			}
			else
			{
				cout << "Keine Einzahlung...\n";
			}
			//Einzahlung
			cout << "\nZum beenden des Programmes bitte die 0 eingeben, andernfalls bitte die 1 eingeben.\n";
			cin >> Check;
		} while (Check == 1);
		//Abbruch
	}
	else
	{
		cout << "Kein Festgeldkonto erstellt.\n";
	}

}