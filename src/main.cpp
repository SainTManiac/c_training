//============================================================================
// Name        : 1234.cpp
// Author      :
// Version     : 0.1
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "./headers/functions.h"
using namespace std;

int main()
{

	int choise;

	cout<<"What you wish to do?:\n"
			<<"1 - calculate exponetiation\n"
			<<"2 - calculate sum of digits"<<endl;
	cin>>choise;

	switch (choise)
	{
	case 1:
		cout<<CallExponentiation()<<endl;
		break;
	case 2:
		cout<<CalculateDigits()<<endl;
		break;
	default:
		return 0;
		;
	}

	return 0;
}
