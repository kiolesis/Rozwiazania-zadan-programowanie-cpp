#include <iostream>
#include <cmath>
// Zadanie 9.
// Napisz program, który policzy oraz zweryfikuje, czy z podanych d³ugoœci boków mo¿na utworzyæ trójkat.
using namespace std;

int t(int a,int b,int c)
{
	if(a+b>c && a+c>b && c+b>a)cout<<"tak";
	else cout<<"nie";
}

main()
{
	int a,b,c;
	cout<<"Podaj boki trojkata: \n";
	cin>>a>>b>>c;
	
	t(a,b,c);
}
