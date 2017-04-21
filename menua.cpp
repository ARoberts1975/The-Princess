#include <iostream>
#include <string>
#include "menu.h"
#include "cfifteen.h"
#include "csixteen.h"
#include "cseventeen.h"
#include "ceighteen.h"
#include "cnineteen.h"
#include "ctwenty.h"

using namespace std;

int menua()
{
	string choicea;
	
	system ("cls");
	system ("time /t");
	system ("date /t");
	cout << "" << endl;
	cout << "The Princess Table of Contents" << endl;
	cout << "Choose from below...\n" << endl;
	cout << "1: Chapter 15" << endl;
	cout << "2: Chapter 16" << endl;
	cout << "3: Chapter 17" << endl;
	cout << "4: Chapter 18" << endl;
	cout << "5: Chapter 19" << endl;
	cout << "6: Chapter 20" << endl;
	cout << "7: Back" << endl;
	cout << "Q: Quit" << endl;
	cout << "Choose...\n";
	cin >> choicea;
	
	if (choicea=="1")
	{
		c_fifteen();
	}

	else if (choicea=="2")
	{
		c_sixteen();
	}
	else if (choicea=="3")
	{
		c_seventeen();
	}
	else if (choicea=="4")
	{
		c_eighteen();
	}
	else if (choicea=="5")
	{
		c_nineteen();
	}
	else if (choicea=="6")
	{
		c_twenty();
	}
	else if (choicea=="7")
	{
		menu();
	}
	else if (choicea=="Q")
	{
		return 0;
	}
	else if (choicea=="q")
	{
		return 0;
	}
	else
	{
		system ("cls");
		cout << "\aThat is not a valid choice" << endl;
		system ("pause");
		menua();
	}
	return 0;
}
