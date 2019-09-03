#include <iostream>
#include <string>

using namespace std;

struct Automobil
{
	int broj;
	string ime;
	string prezime;
};

int main()
{
	Automobil polje[5];
	
	for (int i = 0; i < 5; i++)
	{
		cout << "unesite " << i + 1 << ". autombil" << endl;
		cout << "broj:";
		cin >> polje[i].broj;
		cin.ignore();
		cout << "ime:";
		getline(cin, polje[i].ime);
		cout << "prezime:";
		getline(cin, polje[i].prezime);

	}
	bool dalje;
	do
	{
		int broj;
		cout << "unesite broj:";
		cin >> broj;
		bool nadjen = false;
		for (int i = 0; i < 5; i++)
		{
			if (broj == polje[i].broj)
			{
				cout << polje[i].ime << " " << polje[i].prezime << endl;
				nadjen = true;
				break;
			}
		}
		
		if (!nadjen)
		{
			cout << "nema tog automobila" << endl;
		}
		cout << "dalje(0/1)?";
		cin >> dalje;
	} while (dalje);


	return 0;
}