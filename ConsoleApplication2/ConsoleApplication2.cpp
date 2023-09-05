#include <iostream>
#include <string>

using namespace std;

char AtlantaBraves;


int main()
{
	//atlanta braves -> "you must be soooo cool"
	//houston astros -> "you're aight ig"
	//boston red sox -> "your accent must be annoying"
	//new york mets -> "they suck but lets go mets"


	cout << "Choose your team." << endl;
	cout << "Atlanta Braves" << endl;
	cout << "Houston Astros" << endl;
	cout << "Boston Red Sox" << endl;
	cout << "New York Mets" << endl;



	const string Braves = "Braves";
	const string Astros = "Astros";
	const string Red = "Red Sox";
	const string Mets = "Mets";
	const string Atlanta = "Atlanta";
	const string Houston = "Houston";
	const string Boston = "Boston";
	const string NY = "New York";
	string Team;
	string City;
	string Full;

	getline(cin, (Team, City));


	if (Team == Braves || City == Atlanta)
	{
		cout << "you must be soooo cool";
	}
	else if (Team == Astros || City == Houston)
	{
		cout << "You're aight ig";
	}
	else if (Team == Red || City == Boston)
	{
		cout << "Your accent must be annoying";
	}
	else if (Team == Mets || City == NY)
	{
		cout << "They suck but LETS GO METS!";
	}


	return 0;
}