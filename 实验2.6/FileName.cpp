#include<iostream>
using namespace std;
int main() {
	cout << "����������������" << endl;
	int a, b,c,d;
	cin >> a;
	cin >> b;
	for (int i = 1;i <= a && i <= b;i++) {
		if (a % i == 0 && b % i == 0) {
			c = i;
		}
	}
	cout << "���Լ��Ϊ" << c << endl;
	for (int j = a * b;j >= (a < b ? b : a);j--) {
		if (j % a == 0 && j % b == 0) {
			d = j;
		}
	}
	cout << "��С������Ϊ" <<d<< endl;
	return 0;
}