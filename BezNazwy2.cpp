#include<iostream>
// Zadanie 2.
// .*
using namespace std;

int D(int a)
{
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		cout<<i<<" ";
	}
}

main()
{
	int a;
	cout<<"Podaj liczbe: \n";
	cin>>a;
	D(a);
}
