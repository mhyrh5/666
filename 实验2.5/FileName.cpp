#include<iostream>
using namespace std;
int main() {
        int letterCount = 0; //Ӣ����ĸ����
        int spaceCount = 0; // �ո����
        int digitCount = 0; // �����ַ�����
        int otherCount = 0; // �����ַ�����
        char ch;
        cout << "������һ���ַ���";
        while ((ch = getchar()) != '\n') {
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                letterCount++;
            }
            else if (ch == ' ') {
                spaceCount++;
            }
            else if (ch >= '0' && ch <= '9') {
                digitCount++;
            }
            else {
                otherCount++;
            }
        }
        cout << "Ӣ����ĸ������" << letterCount << endl;
        cout << "�ո������" << spaceCount << endl;
        cout << "�����ַ�������" << digitCount << endl;
        cout << "�����ַ�������" << otherCount << endl;
        return 0;
	return 0;
}