#include <iostream>
#include <cmath>
// Zadanie 9.
// Napisz program, kt�ry policzy oraz zweryfikuje, czy z podanych d�ugo�ci bok�w mo�na utworzy� tr�jkat.
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
