#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int flag = 1;
	int t = n;
	int dv, hc;

	while (t >= 10)
	{
		dv = t % 10;
		hc = t / 10 % 10;
		if (hc > dv)
			flag = 0;
		t = t / 10;
	}

	if (flag == 1)
		cout << "Tang";
	else
		cout << "Ko Tang";

	return 0;
}