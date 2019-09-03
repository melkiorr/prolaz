#include <iostream>
#include <string>

using namespace std;

struct Kolegij
{
	string naziv;
	int bodovi;
	int sati;


};




int main()
{

	Kolegij kolegiji[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "unos" << i + 1 << ". kolegija" << endl;
		cout << "naziv:";
		getline(cin, kolegiji[i].naziv);
		cout << "bodovi:";
		cin >> kolegiji[i].bodovi;
		cout << "sati:";
		cin >> kolegiji[i].sati;
		cin.ignore();
	}

	int ukupno_sati = 0;

	for (int i = 0; i < 3; i++)
	{
		ukupno_sati += kolegiji[i].sati;

	}
	cout << "ukupno:" << ukupno_sati << endl;


	return 0;
}