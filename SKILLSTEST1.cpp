#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	float h1, h2, h3, h4, h5, salary, TH;
	float Tsalary, Expenses;
	float TaxSalary, NSalary, Bonds;

	cout << "Input the number of hours you worked in the first week" << endl;
	cin >> h1;
	cout << " " << endl;
	cout << "Input the number of hours you worked in second week" << endl;
	cin >> h2;
	cout << " " << endl;
	cout << "Input the number of hours you worked in third week" << endl;
	cin >> h3;
	cout << " " << endl;
	cout << "Input the number of hours you worked in fourth week" << endl;
	cin >> h4;
	cout << " " << endl;
	cout << "Input the number of hours you worked in fifth week" << endl;
	cin >> h5;
	cout << " " << endl;
	cout << "Input your pay rate per hour" << endl;
	cin >> salary;
	cout << " " << endl;

	TH = h1 + h2 + h3 + h4 + h5;
	Tsalary = TH * salary;
	TaxSalary = Tsalary - Tsalary * 0.14;
	Expenses = (TaxSalary * .1) + (TaxSalary * 0.01);
	NSalary = TaxSalary - Expenses; 
	Bonds = NSalary * .25;

	cout << "Your total income from the summer job:" << endl;
	cout << Tsalary << endl;
	cout << " " << endl;

	cout << "Your total income after paying taxes:" << endl;
	cout << TaxSalary << endl;
	cout << " " << endl;

	cout << "The money you spend on clothes and other accesories" << endl;
	cout << TaxSalary * .1 << endl;
	cout << " " << endl;

	cout << "The money you spend on school supplies" << endl;
	cout << TaxSalary * .01 << endl;
	cout << " " << endl;

	cout << "The money you spend to buy savings bonds" << endl;
	cout << Bonds << endl;
	cout << " " << endl;

	cout << "The money your parents spend to buy additional savings bond for you" << endl;
	cout << Bonds * 0.50 << endl;

	_getch();
	return 0;
}
	