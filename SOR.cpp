// SOR
// Author: Seyed Mohammad Mehdi Hosseini (Smmehdihosseini@gmail.com)

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <conio.h>


using namespace std;

int main ()


{
	int n;                                                         // Number Of Equations
	int i,j;                                                       // Counters
	 
	cout<<"Please Enter The Number Of Your Equations = "<<endl;
	cin>>n;

	double a[n][n],b[n][1],x[n][1],D[n][n],L[n][n],U[n][n];        // Decompositing A To D , L , U
	double T[n][n],c[n][n],M[n][n];                                // A=Tx+b
	double Error;                                                  // Rate of Error


	
	cout<<"[A].[x] = [b]"<<endl;                                   // Getting The Parameteres Of Matrixes From User
	cout<<"Please Enter Matrix A :"<<endl;
	
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
		cout<<"A["<<i<<"]["<<j<<"] = ";
		cin>>a[i][j];
		}
	}
		
	cout<<"Please Enter Matrix b :"<<endl;
	
	for (j=0;j<n;j++) {
		cout<<"b["<<j<<"][1] = ";
		cin>>b[j][1];
	}

	cout<<"Plesae Enter Matrix x :"<<endl;
	
	for (j=0;j<n;j++) {
		cout<<"x["<<j<<"][1] = ";
		cin>>x[j][1];
	}	
	
	cout<<"Please Enter The Rate Of Accuracy :"<<endl;
	cin>>Error;
	
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			
		D[i][j]=0;
		
		}
	}
  	for (j=0;j<n;j++) {                                            // Calculating The Matrix D , L , U From A
			
		D[i][j]=1/a[i][j];
		
	}
	
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			
		U[i][j]=0;
		L[i][j]=0;
		
		}
	}
	
	while (i<j) {
		
		U[i][j]=a[i][j];
	
	}
	
	while (i>j) {
		
		L[i][j]=a[i][j];
	}
	
	
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			
		T[i][j]=(D[i][j]*(-(L[i][j]+U[i][j])));
		
		}
	}
	
	
	cout<<"Here Is The Results : "<<endl;
	
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			
		x[i][0]=((T[i][1]*x[i][0])+c[i][0]);
		M[i][0]=((a[i][j]*x[i][0])-b[i][0]);
		
		    if (M[i][0]<=Error) {
		    	for (i=0;i<n;i++) {
		    		cout<<"x"<<i+1<<"="<<x[i][0]<<endl;
				}
			}
		}
	}
	
	getch();
	return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
