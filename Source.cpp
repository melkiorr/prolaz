//Zadatak 11:	Napravi program koji prima 2 broja i provjerava da li je x > y , x < y, x = y. Ako je x > y ili x = y treba se ispisati x je veci ili jednak y ako je x manji od y treba ispisati 
// sve brojeve izmedu njih u inkrementima od 3.
// Ovakav zadatak je bio na ispitu samo malo drugaciji.

#include <iostream>
#include <string>
using namespace std;



int main()
{
	int x;
	int y;

	cout << "Upisite 1. broj:";
	cin >> x;
	cout << "Upisite 2. broj:";
	cin >> y;
	cin.ignore();
	
	if (x < y)
	{
		for (int i = x; i <= y; i+=3)
		{
			cout << i << ", ";
		}
		cout << endl;
	}
	
	else if (x >= y)
	{
		cout << "x je veci ili jednak y" << endl;
	}


	
	return 0;
}