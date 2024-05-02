#include "menu.h"
#include <iostream>
#include <iomanip>
using namespace SHAPE;
using namespace std;


int CMENU::MainMenu()
{
	cout << endl << endl << endl;
	
	cout << "Menu Selection" << endl;
	cout << "1. Add Client_Data" << endl;
	cout << "2. List Client_Data" << endl;

	cout << "3. Quit" << endl << endl;
	
	cout << "Enter Selection (1-3): ";
	cin >> selection;
	
	return selection;
}

int CMENU::ClientMenu()
{
	cout << endl << endl << endl;
	
	cout << "MSO Selection" << endl;
	cout << "1. Cox" << endl;
	cout << "2. Mediacom" << endl;
	cout << "3. Comcast" << endl;
	cout << "4. Charter" << endl;
	cout << "5. Goto Main Menu" << endl << endl;
	
	cout << "Enter Selection (1-4): ";
	cin >> selection;
	
	return selection;
}

int CMENU::LastSelection()
{
	return selection;
}

