#include<iostream>
using namespace std;
int main() {
	char zf;
	cout << "������һ��Сд�ַ�" << endl;
	cin >> zf;
	if (zf >= 'a' && zf <= 'z') {
		cout << static_cast<char>(zf - 32) << endl;
	}
	else {
		cout << static_cast<int>(zf - 2) << endl;
	}
	return 0;
}