//Napisite program koji korisnika pita koliko stringova zeli ucitati. na osnovu  upisane vrijednosti pripremite dinamicku memoriju te u nju ucitajte stringove od
//korisnika Na kraju ih ispisite obrnutim redoslijedom.
#include <iostream>
#include <string>

using namespace std;

void ucitaj(string *polje, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "Ucitaj: " << i + 1 << " recenicu: ";
		getline(cin, polje[i]);



	}
}
void ispisi_unazad(string *polje, int length)
{
	for (int i = length - 1; i >= 0; i--)
	{
		cout << polje[i] << endl;
	}





}




int main()
{
	int n;
	cout << "Koliko: ";
	cin >> n;
	cin.ignore();
	string *polje = new string[n];

	ucitaj(polje, n);

	ispisi_unazad(polje, n);


	delete[] polje;
	return 0;
}