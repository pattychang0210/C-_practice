#include "maximum.h"
#include <iostream>
using namespace std;

int main()
{
	int number1;
	int number2;
	int number3;
	cout << "Input three integer values: ";
	cin >> number1 >> number2 >> number3;
	cout << "The maximum integer value is: " << maximum(number1, number2, number3) << endl;


	double double1;
	double double2;
	double double3;
	cout << endl;
	cout << "Input three double values: ";
	cin >> double1 >> double2 >> double3;
	cout << "The maximum double value is: " << maximum(double1, double2, double3) << endl;

	char char1;
	char char2;
	char char3;
	cout << endl;
	cout << "Input three char values: ";
	cin >> char1 >> char2 >> char3;
	cout << "The maximum char value is: " << maximum(char1, char2, char3) << endl;
}