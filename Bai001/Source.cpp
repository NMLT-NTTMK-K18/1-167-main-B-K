#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x1;
	cout << "Nhap x1: ";
	cin >> x1;

	float y1;
	cout << "Nhap y1: ";
	cin >> y1;

	float x2;
	cout << "Nhap x2: ";
	cin >> x2;

	float y2;
	cout << "Nhap y2: ";
	cin >> y2;

	float khoang_cach;
	khoang_cach = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "Khoang cach AB = " << khoang_cach;

	return 0;
}