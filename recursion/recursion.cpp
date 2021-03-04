// Visualizing recursion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

int recursivePower(int, int, int);
int collatzConjecture(int, int);
int fibonacci(int, int);
int factorials(int, int);

int _tmain(int argc, _TCHAR* argv[])
{
	int multi, base, exp, num, fibon;
	char menu;

	cout << "Welcome to the calculator of fun please choose one of the following " << endl;

	cout << " Recursion Power - A " << endl;
	cout << " Collatz Conjecture - B " << endl;
	cout << " Fibonacci sequence - C " << endl;
	cout << " Factorial values - D " << endl;
	cin >> menu;
	switch (menu)
	{
	case 'A':
	case 'a':
		cout << " Enter the base value " << endl;
		cin >> base;
		cout << " Enter the exponent " << endl;
		cin >> exp;
		system("cls");
		cout << " The answer is: " << recursivePower(base, exp, 0) << endl;
		break;
	case 'B':
	case 'b':
		cout << " Please enter a positive whole number: " << endl;
		cin >> num;
		system("cls");
		cout << collatzConjecture(num, 0) << endl;
		break;
	case 'C':
	case 'c':
		cout << " Enter the number you would like to see in the sequence: " << endl;
		cin >> fibon;
		system("cls");
		cout << fibonacci(fibon, 0) << endl;
		break;
	case 'D':
	case 'd':
		cout << " Please enter a positive whole number: " << endl;
		cin >> multi;
		system("cls");
		cout << factorials(multi, 0) << endl;
		break;
	}

	system("pause");
	return 0;
}


// Does math for powers of a number in whole number increments
int recursivePower(int base, int exp, int depth = 0)
{	
	for (int i = 1; i <= depth; i++)
	{
		cout << "	";
	}
	cout << " at depth " << ++depth<< " :" <<" "<< base << "*" << exp << endl;
	if (exp == 0)
		return 1;
	
	return base * recursivePower(base, --exp, depth);
}


// Does the math for the collatz conjecture
int collatzConjecture(int num, int depth= 0)
{
	for (int i = 1; i <= depth; i++)
	{
		cout << "	";
	}

	if (num <= 1)
		return num;
	
	else if (num % 2 == 0)
	{
		cout << " at depth " << ++depth << " :" <<" " << num << "/2"<< endl;
		return collatzConjecture(num/ 2, depth); 
	}
	else if (num % 2 == 1)
	{
		cout << " at depth " << ++depth << " :" <<" "<< num << "*3+1" << endl;
		return collatzConjecture(num* 3+ 1, depth);
	}
}


// Shows the corresponding number to the spot in the fibonacci sequence
int fibonacci(int fibon,int depth= 0)
{
	for (int i = 1; i <= depth; i++)
	{
		cout << " ";
			
	}
 	
	if (fibon <= 1)
	{
		cout << "Returning the value: " << fibon << endl;
		return fibon;
	}

	
	cout << " at depth " << depth << ":"<< "   " << fibon << " The # is found using two preceding values "  << endl;
	return  fibonacci(fibon - 1, depth+1) + fibonacci(fibon - 2, depth+1);
		
	
}


// Shows what the factorial of the entered number is
int factorials(int multi, int depth= 0)
{	
	for (int i = 1; i <= depth; i++)
	{
		cout << "	";
	}

	cout << " at depth " << ++depth << " :" <<" "<< multi << "*" << multi - 1 << endl;
    if( multi > 1)
	{
		return (multi* factorials(multi - 1, depth));
	}
	else
	{
		return (1);
	}
}