#include<iostream>
#include<string>
using namespace std;
int main() 
{
	int money,tmp,ends=1,gamestart=1;
	string tmp2;
	while (ends != 0) {
		if (gamestart == 1) {
			cin >> money;
			gamestart = 0;
		}
		cin >> tmp2;
		if (tmp2 == "應變") {
			money = money - 200;
		}
		if (tmp2 == "削減") {
			money = money - 250;
		}
		if (tmp2 == "雙源") {
			money = money;
		}
		if (tmp2 == "勝利") {
			money = money + 3000;
		}
		if (tmp2 == "失敗") {
			money = money + 1800;
		}
		if (tmp2 == "0") {
			ends = 0;
		}
	}
	cout << money;
}
