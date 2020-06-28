#include <iostream>

using namespace std;

int main() {
	makeresult:
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "첫번째 수 입력: ";
	cin >> a;
	cout << "두번째 수 입력: ";
	cin >> b;
	cout << "사칙기호 입력(1 : +, 2 : -, 3 : *, 4 : /): ";
	cin >> c;

	switch (c) {
	case 1:
		cout << a + b << endl;
		break;
	case 2:
		cout << a - b << endl;
		break;
	case 3:
		cout << a * b << endl;
		break;
	case 4:
		cout << a / b << endl;
		break;
	default:
		cout << "잘못입력하셨습니다." << endl;
		goto makeresult;
		break;
	}
}
