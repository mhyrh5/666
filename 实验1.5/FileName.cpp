#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	cout << "�����뻪���¶�" << endl;
	double h;
	cin >> h;
	double s = (h - 32) * 5 / 9;
	cout << "������λС���������¶�Ϊ" << fixed<<setprecision(2) << s << endl;
	return 0;
}