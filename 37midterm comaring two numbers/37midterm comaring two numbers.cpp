// 37midterm comaring two numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Write a program that asks the user to enter two numbers. The program should use the conditional operator to determine which number is the minimum and which is the max. Display the numbers given by the user and the results. 

//Example: Max: 4   Min : 2

#include <iostream>
using namespace std;
int main()
{
    
	int num1;//creat storage for first number
	int num2;//create a storage for second number
	cout << "please enter the first number\t";// prompt user to enter the second number
	cin >> num1;//make user key in the first number
	cout << "please enter your second number here..\t";// promt user to enter the second number
	cin >> num2;
	if (num1 > num2)//condition to compare the two numbers

		cout << "\tmax:\t" << num1 << "\tmin:\t" << num2 << endl;//executed when the condition above is met
	else if (num2 > num1)//if the condition above is not met the program executes the instructions below
		cout << "\tmax:\t" << num2 << "\tmin:\t" << num1 << endl;//out put of the program if the program meets (else if) statement
	else
		cout << num1 << "\tis equal to \t" << num2 << endl;
	return 0;

	
	
}

