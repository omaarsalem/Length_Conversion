

#include <iostream>
#include <string>
#include <stdio.h>




using namespace std;
int main() {



	char conv;
	// Declaring Variables
	float KM,m,M,CM;



	cout << "Welcome to Length Conversion" << endl;         // introduction for what the codes can do
	cout << "Please Choose a Method of conversion" << endl;
	cout << "1. KM to M " << "2. M to KM " << "3. M to CM " << "4. CM to M " << endl; // choose the preferred method of conversion
	cin >> conv;



	switch (conv) {

	case '1': {
		cout << "Here You Can Convert from Km to M" << endl;
		cout << "Please enter the required conversion of KM: ";   // Case 1 to convert from Kilometer to Meter by multiplying the input as KM * 1000 to get the Meter
		cin >> KM;
		m = KM * 1000;
		cout << "Km to M = " << m; }
			break;




	case '2': {
		cout << "Here You Can Convert from M to KM" << endl;
		cout << "Please enter the required conversion of M: ";
		cin >> M;                                      // Case 2 to convert from Meter to Kilometer by dividing the input of Meter / 1000 to get the kilometer
		cout << "M to Km = " << (M / 1000); }
			break;



	case '3': {
		cout << "Here You Can Convert from M to CM" << endl;
		cout << "Please enter the required conversion of M: ";
		cin >> M;                                           // Case 3 to convert from Meter to Centimeter by multiplying the input as M * 100 to get the Centimeter
		cout << "M to CM = " << (M * 100); }
			break;




	case '4': {
		cout << "Here You Can Convert from CM to M" << endl;
		cout << "Please enter the required conversion of CM: ";
		cin >> M;                                         // Case 4 to convert from Centimeter to Meter by dividing the input of Centimeter / 100 to get the Meter
		cout << "CM to M = " << (M / 100); }
			break;

	default:
		cout << "Good Luck";  // the default case if the user have an input different than the case values
	}

	return 0;
}