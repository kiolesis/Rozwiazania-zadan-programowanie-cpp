#include <iostream>
#include <cmath>
// Zadanie 7.
// Napisz program, kt�ry przyjmuje od u�ytkownika 3 liczby ca�kowite oraz zwraca najmniejsz� z nich.
using namespace std;

int min(int a,int b,int c)
{
	if(a<b && a<c)return a;
	if(b<a && b<c)return b;
	if(c<a && c<b)return c;
}
main()
{
	int a,b,c;
	cout<<"Podaj 3 liczby: \n";
	cin>>a>>b>>c;
	cout<<min(a,b,c);
}
