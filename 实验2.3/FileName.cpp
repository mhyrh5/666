#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "���������������߱߳�" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && b + c > a && a + c > b) {
		cout << "�������ܳ�Ϊ" << a + b + c <<endl;
		if (a == b || b == c || a == c) {
			cout << "���������ǵ���������" << endl;
		}
	}
	else {
		cout << "�ⲻ��������" << endl;
	}
	return 0;
}
