//Zad 21: Napi�ite program koji od korisnika u�itava jedan string te ispisuje nalazi li se slovo a u tom stringu ili ne. 
//Primjerice ako korisnik upise string trla baba lamn da joj prode dan, program treba ispisati Znak a se pojavljuje u stringu 

#include <iostream>
#include <string>


using namespace std;

int main()
{

	string rec;
	cout << "Unesite string: ";
	getline(cin, rec);
	cout << rec << endl;

	for (int i = 0; i < rec.size(); i++)
	{
		if (rec[i] == 'a')
		{
			cout << "Ima slovo a" << endl;
			return 1;
		}

		
	}
	
	cout << "Nema" << endl;





	return 0;
}