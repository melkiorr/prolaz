// U ovom zadatku smo trebali napraviti txt file s nekim brojevima i iz tih brojeva izvuc parne i neparne i zapisati ih u svoje filove.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream in("brojevi.txt");
	ofstream parni("parni.txt");
	ofstream neparni("neparni.txt");
	if (!in || !parni || !neparni)
	{
		cout << "Nemore" << endl;
		return 1;
	}

	int broj;
	while (in >> broj)
	{
		if (broj % 2 == 0)
		{
			parni << broj << endl;
	
		}
		else
		{
			neparni << broj << endl;
		}
	}
	


	neparni.close();
	parni.close();
	in.close();
	return 0;
}



