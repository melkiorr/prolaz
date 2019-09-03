// Napisite funkciju koja prihvaca dva polja znakova: u prvo polje su upisnai znakovi a drugo je prazno. funkcija treba iz prvog polja 
// prepisati sve elemente u drugo polje u obrnutom redu. u mainu pripremite polja pozovite funkciju te ispisite sadrzaj drugog polja

#include <iostream>
using namespace std;

void prepisi(int *polje1, int *polje2, int length)
{
	int ind = length - 1;
	for (int i = 0; i < length; i++)
	{
		polje2[i] = polje1[ind];
		ind--;
	}



}

void ispisi(int *polje2, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << polje2[i] << endl;
	}



}

void ucitaj(int *polje1, int length)
{

	for (int i = 0; i < length; i++)
	{
		cout << "Upisite: ";
		cin >> polje1[i];
	}


}
int main()
{
	int n;
	cout << "Koliko puta:";
	cin >> n;




	int *polje1 = new int[n];
	int *polje2 = new int[n];

	ucitaj(polje1, n);

	prepisi(polje1, polje2, n);

	ispisi(polje2, n);


	delete[] polje1;
	delete[] polje2;
	return 0;
}