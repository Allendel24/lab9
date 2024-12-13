#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double a, b, c;
	cout << "Enter initial loan: ";
	cin >> a;
	cout << "Enter interest rate per year (%): ";
	cin >> b;
	cout << "Enter amount you can pay per year: ";
	cin >> c;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int i = 1;
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(a > 0){
	    double p = a*(b/100.0), t = a + p;
	    cout << fixed << setprecision(2); 
	    cout << setw(13) << left << i; 
	    cout << setw(13) << left << a;
	    cout << setw(13) << left << p;
	    cout << setw(13) << left << t;
	    if (t < c) c = t;
	    cout << setw(13) << left << c;
	    cout << setw(13) << left << t - c;
	    cout << "\n";
	    a = t- c;
	    i ++;
	}
	
	return 0;
}