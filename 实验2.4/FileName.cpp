#include<iostream>
using namespace std;
int main() 
{
        double num1, num2;
        char op;
        cout << "�������һ������";
        cin >> num1;
        cout << "�������������+��-��*��/��%����";
        cin >> op;
        cout << "������ڶ�������";
        cin >> num2;
        switch (op) {
        case '+':
            cout << num1 + num2 << endl;
            break;
       
        case '-':
            cout << num1-num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 / num2 << endl;
            }
            if (num2 == 0) {
                cout << "��������Ϊ0" << endl;
            }
            break;
        case '%':
        {
            if (num2 != 0) {
                cout << static_cast<int>(num1) % static_cast<int>(num2) << endl;
            }
            break;
            if(num2==0) {
                cout << "��������Ϊ0" << endl;
            }
        }
        default:
            cout << "�Ƿ��������" << endl;
        }
        
	return 0;
}