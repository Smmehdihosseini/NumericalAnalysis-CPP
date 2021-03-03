// Newton Raphson
// Author: Seyed Mohammad Mehdi Hosseini (Smmehdihosseini@gmail.com)

#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

double f(double x);
double f(double x) {
	double Eq=pow(x,3)+x-1;
	return Eq;
}

double derivef(double x);
double derivef(double x) {
	long Eq=3*pow(x,2)+1;
	return Eq;
}

double Xinitial; // X initial
double Xn; // X(n+1)
double Fx=f(Xinitial);
double dFx=derivef(Xinitial);
int n=0; // Counter of stages

int main () {
	
	cout << "Please enter the initialize value of X : \n";
	cin >> Xinitial;
	
	while (1) {
	
	Fx=f(Xinitial);
    dFx=derivef(Xinitial);	
	Xn=Xinitial-Fx/dFx;

	
	cout<< n << "         " << Xn << "\n";
	n++;
	if (Xn==Xinitial) {
		break;
	}
	
	Xinitial=Xn;			
	}
	
	
	
	return 0;
		getch();
}


