#include<iostream>
using namespace std;

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	float t = 1;
	int i = 1;
	int dau = 1;

	while (i <= n)
	{
		t = t * x;
		s = s + dau * t;
		i = i + 1;
		dau = -dau;
	}
	cout << "s = " << s;
	return 0;
}