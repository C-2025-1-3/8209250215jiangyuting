#include<iostream>
using namespace std;
/*int s01(int& a, int& b) {
	if (a <= b) {
		int k = a;
		while (k >0) {
			if (a % k == 0 && b % k == 0)break;
				else k--;
		}
		return k;
	}
	else {
		int k = b;
		while(k >0) {
				if (a % k == 0 && b % k == 0)break;
				else k--;
		}
		return k;
	}
}
int s02(int& A, int& B) {
	if (A <= B) {
		int K = B;
		for (;;)
		{
			if (K % A == 0 && K % B == 0) {
				break;
			}
			else K++;
		}
		return K;
	}
	if (A > B) {
		int K = A;
		for (;;)
		{
			if (K % A == 0 && K % B == 0) {
				break;
			}
			else K++;
		}
		return K;
	}
	
}
int main() {
	int i, j;
	cin >> i >> j;
	int k = s01(i, j);
	int K = s02(i,j);
	cout << "它们的最大公约数是" << k << endl;
	cout << "它们的最小公倍数是" << K << endl;
	return 0;
}
bool is_prime(int num) {
	if (num <= 1)return false;
	if (num==2)return true;
	if(num%2==0)return false;
	for (int i = 3; i * i <= num; i += 2) {
		if(num%i==0)return false;
	}
	return true;
}
int main() {
	int sum = 0;
	for (int i = 0;sum<200; i++) {
		if (1 == is_prime(i)) {
			cout << i<<" ";
			sum++;
			if (sum % 10 == 0)cout << endl;
		}
	}
}*/
int peach(int i) {
	if (i == 10)return 1;
	return (peach(i + 1) + 1) * 2;
}
int main() {
	cout << "猴子第一天摘了" << peach(1) << "个桃子";
	return 0;
}