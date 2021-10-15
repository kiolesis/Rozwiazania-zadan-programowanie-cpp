#include <iostream>
// Zadanie 3.
// Napisz program, który wypisuje liczby, jeœli reszta z dzielenia jest równa zero.
using namespace std;

main()
{
	int a;
	cout<<"Podaj liczbe: \n";
	cin>>a;
	
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		cout<<i<<" ";
	}
}
