// U ovom zadatku smo trebali napraviti strukturu adresa i napraviti polje velicine 3, te strukture. I to je trebalo sve upisati u txt file.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct adresa
{
	string ulica;
	string kucni_broj;
	int post_broj;
};


int main()
{
	ofstream out("adrese.txt");

	if (!out)
	{
		cout << "Nemore" << endl;
		return 1;
	}

	adresa adrese[3];
	adrese[0].ulica = "Ilica";
	adrese[0].kucni_broj = "212";		// Unos adresa u polje, pazi na vrstu podataka.
	adrese[0].post_broj = 10000;


	adrese[1].ulica = "Medvedgraska";
	adrese[1].kucni_broj = "56";
	adrese[1].post_broj = 10000;

	adrese[2].ulica = "Prevoj";
	adrese[2].kucni_broj = "19n";
	adrese[2].post_broj = 10000;




	for (int i = 0; i < 3; i++)
	{
		out << adrese[i].ulica << "," << adrese[i].kucni_broj << "," << adrese[i].post_broj << endl;		// S for petljom smo upisali podatke u file.
	}


	out.close();
	return 0;
}