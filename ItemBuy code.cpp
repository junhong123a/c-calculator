#include <iostream>

using namespace std;

int ItemCnt = 0;
int money = 1000;

void BuyItem(int a) {
	
	int b = 0;

	while (true)
	{
		ItemCnt++;
		money -= 100;
		b++;
		if (a == b) break;
	}


	cout << "아이템을 구매 하였습니다." << endl;
	cout << "아이템 갯수 : " << ItemCnt << endl;
	cout << "잔액 : " << money << endl;


}

int main() {
	int n;
	cin >> n;
	BuyItem(n);

}
