#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int dt = abs(n);

	while (dt >= 10)
		dt = dt / 10;
	
	cout << "dt = " << dt;

	return 0;
}