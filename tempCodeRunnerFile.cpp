#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, rate, pay;

	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

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
	

	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	
	int i =  0;
	double pb, itr, tt, pm, nb;
	nb = loan;
	cout << fixed << setprecision(2); 

	while(1)
	{
	
	i++;

	cout << setw(13) << left << i;

	pb = nb;
	cout << setw(13) << left << pb;

	itr = pb * rate / 100;
	cout << setw(13) << left << itr;

	tt = pb + itr;
	cout << setw(13) << left << tt;

	if(nb < 100 ) pm = tt ;
	else pm = pay;
	cout << setw(13) << left << pm;

	nb = tt - pm ;
	cout << setw(13) << left << nb;

	cout << "\n";	
	
	if(nb == 0) break;
	
	}
	
	return 0;
}
