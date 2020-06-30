#include <iostream>

using namespace std;

int main() {
makeresult:
	int a = 0;
	int b = 0;
	char c;

	cout << "첫번째 수 입력: ";
	cin >> a;
	cout << "두번째 수 입력: ";
	cin >> b;
	cout << "사칙기호 입력: ";
	cin >> c;

	switch (c) {
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		cout << a / b << endl;
		break;
	default:
		cout << "잘못입력하셨습니다." << endl;
		goto makeresult;
		break;
	}
}
