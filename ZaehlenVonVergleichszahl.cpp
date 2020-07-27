#include <iostream>
using namespace std;

int main()
{
	int eingabe_array[4];
	int vergleichzahl;
	unsigned int gleich = 0;
	unsigned int ungleich = 0;
	for (int i = 0; i < 4; i++)
	{
		int eingabe;
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		cin >> eingabe;
		eingabe_array[i] = eingabe;
	}

	cout << "Bitte geben Sie die Vergleichszahl ein: ? ";
	cin >> vergleichzahl;

	for (int i = 0; i < 4; i++)
	{
		if (eingabe_array[i] == vergleichzahl)
		{
			gleich++;
		}
		else
		{
			ungleich++;
		}
	}

	cout << gleich << " Eingabezahlen waren gleich der Vergleichszahl." << endl
		<< ungleich << " Eingabezahlen waren ungleich der Vergleichszahl." << endl;

	system("PAUSE");
	return 0;
}