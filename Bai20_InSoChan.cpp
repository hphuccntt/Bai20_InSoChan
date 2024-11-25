#include <iostream>
using namespace std;
int main()
{
	int so, tongchan=0, tongle=0, tong = 0;
	cout << " Tinh So Chan:\n ";
	cout << " nhap so "; cin >> so;
	for (int i = 0; i < so; i++)
	{
		tong += i;
		if (i % 2 == 0)
		{
			cout << i << " ";
			tongchan += i;
		}
		else
		{
			tongle += i;
		}

	}
	cout << " tong cac so chan: " << tongchan << endl;
	cout << " tong cac so le: " << tongle << endl;
	cout << " tong cac so chan va le: " << tongchan + tongle << endl;
	return 0;
}