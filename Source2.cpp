//Zad 13:	Ovdje ima nekih ekstra stavri koje nam je pokazivao, ali je za originalni zadatak trebalo ispisati kvadrat napravljen od * koji ima samo rubove a u sredini je prazan.
// U principu na ispitu ti moze doc bilo koja od ovih kombinacija, ali s obzirom da je to najtezi dio u ispitu bolje to izbjegavat, dovoljno je da rijesis prva 2 tocno i na konju si.

#include <iostream>
#include <string>

using namespace std;

void printKvadrat(int sirina, int visina)
{
	for (int red = 1; red <= visina; red++)
	{
		
		for (int stupac = 1; stupac <= sirina; stupac++)
		{
			if (red == 1 || red == visina || stupac == 1 || stupac == sirina)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}

void printTrokut1(int sirina, int visina)
{
	for (int red = 1; red <= visina; red++)
	{

		for (int stupac = 1; stupac <= sirina; stupac++)
		{
			if (stupac== 1 || red == visina || red == stupac)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}


void printTrokut2(int sirina, int visina)
{
	for (int red = 1; red <= visina; red++)
	{

		for (int stupac = 1; stupac <= sirina; stupac++)
		{
			if (red == 1 || stupac == sirina || red == stupac)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}

void printTrokut3(int sirina, int visina)
{
	for (int red = 1; red <= visina; red++)
	{

		for (int stupac = 1; stupac <= sirina; stupac++)
		{
			if (red == visina || stupac == sirina || red + stupac == visina +1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}

void printTrokut4(int sirina, int visina)
{
	for (int red = 1; red <= visina; red++)
	{

		for (int stupac = 1; stupac <= sirina; stupac++)
		{
			if (red == 1 || stupac == 1 || red + stupac == visina + 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}
int main()
{
	int n;
	cout << "Unesi broj: ";
	cin >> n;

	//printKvadrat(n,n);
	//printTrokut1(n, n);
	//printTrokut2(n, n);
	//printTrokut3(n, n);
	printTrokut4(n, n);
	return 0;
}