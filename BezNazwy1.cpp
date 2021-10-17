#include <iostream>

using namespace std;

main()
{
	string wyraz;
	int k=0;

	cout<<"Podaj wyraz "<<endl;
	cin>>wyraz;

	for(int i=0; i < wyraz.size(); i++)
	{
		if(wyraz[i] == 'a' || wyraz[i] =='A')
		k++;
	}

	if(k>0)
	cout << "\nWyraz posiada " << k << " liter a";
	else
	cout << endl << "Wyraz nie posiada litery a";
}
