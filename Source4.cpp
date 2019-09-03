//zad 3. Napisite funkciju koja vraæa prost ili nije. U mainu uèitajte od korisnika dva broja a i b te za svaki broj izmedu a i b pozovite funkciju i ispisite prost nije prost. PAzite nemora vrijediti da je a manji od b.

#include <iostream>

using namespace std;

bool prost(int broj)
{
	for (int i = 2; i < broj; i++)
	{
		if (broj % i == 0)
		{
			return false;
		}
	}
	return true;
}




int main()
{
	int manji;
	cout << "manji: ";
	cin >> manji;

	int veci;
	cout << "veci: ";
	cin >> veci;

	if (manji > veci)
	{
		int temp = manji;
		manji = veci;
		veci = temp;
	}
	
	for (int i = manji; i <= veci; i++)
	{
		if (prost(i))
		{
			cout << i << " je prost " << endl;
		}
		else
		{
			cout << i << " nije prost " << endl;
		}
	}


	return 0;
}