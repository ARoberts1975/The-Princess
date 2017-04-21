#include <iostream>
#include "menu.h"

using namespace std;

void about()
{
	system ("cls");
	cout << "The Princess" << endl;
	cout << "Written by ADR" << endl;
	cout << "_______________________________________________________________________________" << std::endl;
	cout << "                                     About\n" << endl;
	cout << "Version 1.4.2017" << endl;
	cout << ">Legal<" << endl;
	cout << "-------" << endl;
	cout << "\"The Princess\" (C)Copyright 2005-2014 Allen Roberts." << endl;
	cout << "**This book is protected by copyright. You may not copy, translate or post any" << endl;
	cout << "part, or the whole without written permission by the author.**\n" << endl;
	cout << "**\"The Princess\" is a work of fiction. All places, events, and characters are" << endl;
	cout << "either the product of the author's imagination or used fictitiously. Any" << endl;
	cout << "resembalance to actual places, events, or people, living or dead, is entirely" << endl;
	cout << "coincidental.**\n" << endl;
	cout << "**Please do not distribute, copy, disassemble, or modify this program in any" << endl;
	cout << "way, this includes the translation in part or in whole into any language. Thank" << endl;
	cout << "you.**\n" << endl;
	cout << "**This program is meant for non-profit use only. It is NOT to be sold in anyway" << endl;
	cout << "whatsoever, either as part of a compliation or on its own. This includes any" << endl;
	cout << "future versions, or builds. Thank you!**" << endl;
	system ("pause");
	menu();
}
