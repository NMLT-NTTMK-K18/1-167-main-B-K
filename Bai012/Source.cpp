#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap x = ";
	float x;
	cin >> x;

	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	cout << "x6 = " << x6;

	return 0;
}