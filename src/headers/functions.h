#include <iostream>
using namespace std;
#include "prototypes.h"

double CallExponentiation()
{
	double base_number = 0;
	int exponent = 0;
	cout<<"Give me two digits:"<<endl<<"base number = \t";
	cin>>base_number;
	cout<<endl<<"exponent = \t";
	cin>>exponent;
	cout<<base_number<<" ^ "<<exponent<<" = ";
	if (base_number == 0 && exponent == 0)
	{
		cout<<"0_";
		return 0;
	}
	else
	{
		return Exponentiation(base_number, exponent);
	}

}

double Exponentiation(double &base_number, int exponent)
{
	double result = 1;

	if (exponent > 0)
	{
		while(exponent)
		{
			result *= base_number;
			--exponent;
		}

	}
	else if(exponent < 0)
	{
		exponent = -exponent;
		while(exponent)
		{
			result *= base_number;
			--exponent;
		}
		result /= 1;
	}

	return result;

}


size_t CalculateDigits()
{

	size_t array_size = 1;
	size_t array_index = 0;
	size_t sum = 0;
	size_t input = 1;
	size_t *array = nullptr;

	array = new size_t [array_size];

	cout<<"Enter your digits ('0' should be the last one):"<<endl;

	array[array_index] = 1;

	while(input)
	{

		if(array_index == array_size)
		{
			array = AllocateNewArray(array, array_size);

		}

		cin>>input;
		array[array_index] = input;
		sum += array[array_index];
		++array_index;
	}

	array_index = 0;

	while(array[array_index])
	{
		cout<<array[array_index]<<" + ";
		++array_index;
	}
	cout<<array[array_index]<<" = ";

	delete[] array;

	return sum;

}

size_t* AllocateNewArray(size_t *&array, size_t &array_size)
{

	array_size *= 2;
	size_t *new_array = new size_t [array_size];

	for(size_t i = 0; i < (array_size/2); ++i)
	{
		new_array[i] = array[i];
	}

	delete[] array;
	array = new_array;

	return array;
}

