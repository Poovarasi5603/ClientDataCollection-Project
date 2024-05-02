#include "shape.h"
#include <string>
#include <iostream>
#include <cstdio>
using namespace SHAPE;
using namespace std;

void Mediacom::getinputs()
{
	cout << "\n\nEnter Code: ";
	cin >> code;
	
	cout << "\n\nEnter MSO: ";
	cin >> MSO;
	
	cout << "\n\nEnter Date: ";
	cin >> Date;
	
	cout<<"\n\nEnter the File_received_Through: ";
	cin >> SourceFile;
	
	cout<<"\n\nEnter the File_frequency: ";
	cin >> frequency;
	
	cout<<"\n\nEnter the File_Size: ";
	cin >> filesize;
	
	cout<<"\n\nEnter the Record_Count: ";
	cin >> record;
	
	cout<<"\n\nEnter the Column_Count: ";
	cin >> column;
	
}



char * Mediacom::ToString()
{
	char *buff = new char[80];
sprintf(buff, "%d %s %s %s %s %s %d %d", code, MSO,Date, SourceFile,frequency,filesize,record,column );	
	return buff;
}

