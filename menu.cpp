#include <iostream>
#include <string>
#include "menua.h"
#include "about.h"
#include "progress.h"
#include "pro.h"
#include "cone.h"
#include "ctwo.h"
#include "cthree.h"
#include "cfour.h"
#include "cfive.h"
#include "csix.h"
#include "cseven.h"
#include "ceight.h"
#include "cnine.h"
#include "cten.h"
#include "celeven.h"
#include "ctwelve.h"
#include "cthirteen.h"
#include "cfourteen.h"

using namespace std;

int menu(){
	string choice;

	system ("cls");
	system ("time /t");
	system ("date /t");
	cout << "" << endl;
	cout << "The Princess Table of Contents" << endl;
	cout << "choose from below..." << endl;
	cout << "A: About" << endl;
	cout << "P: Progress" << endl;
	cout << "1: Prologue" << endl;
	cout << "2: Chapter 1" << endl;
	cout << "3: Chapter 2" << endl;
	cout << "4: Chapter 3" << endl;
	cout << "5: Chapter 4" << endl;
	cout << "6: Chapter 5" << endl;
	cout << "7: Chapter 6" << endl;
	cout << "8: Chapter 7" << endl;
	cout << "9: Chapter 8" << endl;
	cout << "10: Chapter 9" << endl;
	cout << "11: Chapter 10" << endl;
	cout << "12: Chapter 11" << endl;
	cout << "13: Chapter 12" << endl;
	cout << "14: Chapter 13" << endl;
	cout << "15: Chapter 14" << endl;
	cout << "16: More..." << endl;
	cout << "Choose...\n";
	cin >> choice;

	if (choice=="A")
	{
		about();
	}
	else if (choice=="a")
	{
		about();
	}
	else if (choice=="P")
	{
		progress();
	}
	else if (choice=="p")
	{
		progress();
	}
	else if (choice=="1")
	{
		pro();
	}
	else if (choice=="2")
	{
		c_one();
	}
	else if (choice=="3")
	{
		c_two();
	}
	else if (choice=="4")
	{
		c_three();
	}
	else if (choice=="5")
	{
		c_four();
	}
	else if (choice=="6")
	{
		c_five();
	}
	else if (choice=="7")
	{
		c_six();
	}
	else if (choice=="8")
	{
		c_seven();
	}
	else if (choice=="9")
	{
		c_eight();
	}
	else if (choice=="10")
	{
		c_nine();
	}
	else if (choice=="11")
	{
		c_ten();
	}
	else if (choice=="12")
	{
		c_eleven();
	}
	else if (choice=="13")
	{
		c_twelve();
	}
	else if (choice=="14")
	{
		c_thirteen();
	}
	else if (choice=="15")
	{
	 	 c_fourteen();
	 }
	else if (choice=="16")
	{
		menua();
	}
	else
	{
		system ("cls");
		cout << "\aSorry not a valid choice" << endl;
		system ("pause");
		menu();
	}
return 0;
}
