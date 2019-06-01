#include "pch.h"
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14159; //PI value

double calc(double e, double r, double f, double l, double c) {
	double i;
	i = e / (sqrt(pow(r, 2.0) + pow((2.0*PI*f*l - 1.0 / (2.0*PI*f*c)), 2.0)));
	cout << "Current is " << i << " Amps" << endl;
	return i;
}



int main()
{	
	string mystring("Current Calculator");
	cout << mystring <<endl; // display a welcoming message

	double I = 0,E = 0, R = 0, F = 0, L = 0, C = 0; //Variables of double type to accept user input below
	cout << "Input the Frequency (Hz):";
	cin >> F;

	cout << "Input the Resistance (Ohms):";
	cin >> R;

	cout << "Input the Capacitance (Farads):";
	cin >> C;

	cout << "Input the Inductance (Henrys):";
	cin >> L;

	cout << "Input the Electromotive (Volts):";
	cin >> E;

	I = calc(E, R, F, L, C);

	// block below is to show all the inputs + the current
	cout << "\nF(HZ)\t";
	cout << "EMF(V)\t";
	cout << "R(Ohms)\t";
	cout << "C(F)\t";
	cout << "I(H)"<< endl;

	cout << F <<"\t";
	cout << E << "\t";
	cout << R << "\t";
	cout << C << "\t";
	cout << I << endl;


	cout << "\nFrequency (Hz)" << "\t\t";
	cout << "Current (Amps)" << endl;

	cout << "------------" << "\t\t";
	cout << "------------" <<endl;
	//loop thourgh out the frequencies from 1 to 301 and calculate current  accordingly
	for (F = 1; F <= 301; F= F + 10) {
		cout << F <<" Hz"<<"\t\t\t";
		calc(E, R,F, L, C);
	}

	system("pause");
}