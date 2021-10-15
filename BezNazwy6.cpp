#include <iostream>
#include <cmath>
// Zadanie 6.
// Napisz program, który odwróci wpisany tekst.
using namespace std;

char wy(string wyraz)
{
	string odw;
	for(int i=0;i<=wyraz.size();i++)
	odw[i]=wyraz[wyraz.size()-i];
	for(int i=0;i<=wyraz.size();i++)
	cout<<odw[i];
}

main()
{
	cout<<"Podaj wyraz ";
	string wyraz;

	cin>>wyraz;
	wy(wyraz);
}
