#include "cshapes.h"
#include "shape.h"
#include <fstream>
#include <string>
void CShapes::addClientData()
{
	int shapeopt;
	ClientData *s;
	ofstream f;

	shapeopt = o.ClientMenu();
	
	switch(shapeopt)
	{
		case 1:
			s = new Cox();
			break;
		case 2:
			s = new Mediacom();
			break;
		case 3:
			s = new Comcast();
			break;
		case 4:
			s = new Charter();
			break;
		case 5:
			return;
	}
	s->getinputs();
	f.open("E:\\code\\c++\\client_data\\Data.txt", ios::app);
	f <<  s->ToString() << endl;
	f.close();
	
	delete s;
}
	
void CShapes::listClientData()
{
	ifstream fr;
	string buff;
	
	cout << endl << endl;
	
	cout << "List of ClientData..." << endl;
	fr.open("E:\\code\\c++\\client_data\\Data.txt");
	while((getline(fr, buff))!=NULL)
		cout << buff << endl;
	fr.close();
}

void CShapes::start()
{
	int opt;

	
	do{
		opt = o.MainMenu();
		
		if(opt==3) break;
		
		switch(opt)
		{
			case 1:
				addClientData();
				break;
			case 2:
				listClientData();
				break;
		}
		
	}while(opt!=3);
}

