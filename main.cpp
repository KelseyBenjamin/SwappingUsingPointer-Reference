#include <iostream>
#include "3a.h"
using namespace std;


int main()
{
	int a, b, c;
	cout << "Enter The value of A, B, and C." << endl;
	cin >> a >> b >> c;
	//swap 1
	swap1(&a, &b, &c);
	//cout
	cout << "After swapping:" << endl << a << endl << b << endl << c << endl;
	//swap 2
	swap2(a, b, c);
	//cout
	cout << "After swapping again:" << endl << a << endl << b << endl << c << endl;

	system("pause");
	return 0;
}