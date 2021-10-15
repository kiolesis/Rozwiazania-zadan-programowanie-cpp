#include <iostream>
// Zadanie 1.
// Napisz program, który obliczy deltê.

using namespace std;

int delta(int a,int b,int c)
{
	int d;
	d=b*b-4*a*c;
	return d;
}

main()
{
	int a,b,c;
	cout<<"Podaj a ";
	
	cin>>a;
	cout<<"Podaj b ";
	
	cin>>b;
	cout<<"Podaj c ";
	
	cin>>c;
	cout<<"delta = "<<delta(a,b,c);
}
