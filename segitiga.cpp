/* Program 1 */
/* Menghitung Sisi Miring dan Keliling Segitiga Siku-siku */

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main ()
{
	float a,t,c,k;
	cout<<"\nMenghitung Sisi Miring Segitiga Siku Siku";
	cout<<"\nmasukan alas segitiga =  ";cin>>a;
	
	cout<<"\nMasukan Tinggi Segitiga = ";cin>>t;
	c=sqrt (a*a+t+t);
	cout<<"\nPanjang Sisi Miring = "<<c;
	cout<<"\tMenghitung Keliling Segitiga Siku siku\n";
	cout<<"\nmasukan alas segitiga = ";cin>>a;
	
	cout<<"\nmasukan tinggi segitiga = ";cin>>t;
	cout<<"\nmasukan sisi miring segitiga = ";cin>>c;
	k=a+t+c;
	cout<<"Keliling Segitiga = "<<k;
	
	getch();
	return 0;
}
