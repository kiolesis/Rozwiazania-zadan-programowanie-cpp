#include <iostream>
// Zadanie 3.
// Napisz program, kt�ry wypisuje liczby, je�li reszta z dzielenia jest r�wna zero.
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
