#include<iostream>
#include<iomanip>
#include "mytemperature.h"
using namespace std;
int main() {
	cout << fixed << setprecision(2);
	cout << "Celsius\t\tFahrenheit\t|\tFahrenheit\t\tCelsius" << endl;
	double cel = 40.0;
	double fah = 120.0;
	cout << cel << "\t\t"<< celsius_to_fah(cel) << "\t\t"<<"|" 
		<< "\t" << fah <<"\t\t\t" << fahrenheit_to_cels(fah)<<endl;
	double cel2 = 39.0;
	double fah2 = 110.0;
	cout << "..." << "\t\t" << "..." << "\t\t" << "|"
		<< "\t" <<  "..." << "\t\t\t" <<  "..." << endl;
	cout << "..." << "\t\t" <<  "..." << "\t\t" << "|"
		<< "\t" << "..." << "\t\t\t" <<  "..." << endl;
	double cel3 = 31.0;
	double fah3 = 30.0;
	cout << cel3 << "\t\t" << celsius_to_fah(cel3) << "\t\t" << "|"
		<< "\t" << fah3 << "\t\t\t" << fahrenheit_to_cels(fah3) << endl;
}