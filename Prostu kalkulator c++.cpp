#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;



int main()
{
	int jm;
	float pierwszalicz;
	float drugalicz;
	cout << "wybierz pierwsza liczbe";
	cin >> pierwszalicz;
	cout << "wybierz druga liczbe";
	cin >> drugalicz;
	cout << "Wybierz czynnosc (* = 1 , / = 2 , - = 3 , + = 4)";
	cin >> jm;
		switch (jm) {
		case 1:
			cout << pierwszalicz * drugalicz << " oto twoj wynik";
			break;

		case 2:
			cout << pierwszalicz / drugalicz << " oto twoj wynik";
			break;
		case 3:
			cout << pierwszalicz - drugalicz << " oto twoj wynik";
			break;
		case 4:
			cout << pierwszalicz + drugalicz << "oto twoj wynik";
			break;
		}

	

	
	
	return 0;

	
}
