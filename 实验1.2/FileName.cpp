#include<iostream>
using namespace std;

const double pi = 3.14159265358979323846;
int main() {
	double r,h;
	cout << "������Բ׶�뾶" << endl;
	cin >> r;
	cout << "������Բ׶�ĸ�" << endl;
	cin >> h;
	double v = r * r * h * pi / 3;
	cout << "Բ׶�����Ϊ" << v << endl;
	return 0;
}