#include<iostream>
#include<string>
using namespace std;
/*int main() {
	int num[10];
	int count = 0;
	int input;
	for (int i = 0; i < 10; i++) {
		cin >> input;
		bool exit = false;
		for (int j = 0; j < count; j++) {
			if (num[j] == input) { exit = true; break; }
		}
		if (!exit) {
			num[count] = input; count++;
		}
	}
	for (int i = 0; i < count; i++) {
		cout << num[i] << " ";
}
	return 0;
}
void pop01(double arr[10]) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main() {
	double arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	pop01(arr);
	for (int i = 0; i < 10; i++) {
		cout << arr[i]<<" ";
	}
	return 0;
}
int main() {
	bool condition[100] = { false };
	for(int student=1;student<101;student++){
		for (int clock = student - 1; clock < 100; clock += student) {
			condition[clock] = !condition[clock];
		}
}
	for (int i = 0; i < 100; i++) {
		if (condition[i] == true) { cout << i + 1 << " "; }
	}
		
}
const int MAX_SIZE = 80;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0; int j = 0; int k = 0;
	while (i < size1 && j < size2) {
		if (list1[i] < list2[j]) {
			list3[k++] = list1[i++];
		}
		else {
			list3[k++] = list2[j++];
		}
	}
	while (i < size1) {
		list3[k++] = list1[i++];
	}
	while (j < size2) {
		list3[k++] = list1[j++];
	}
}

	int main () {
	int list1[MAX_SIZE], list2[MAX_SIZE], list3[MAX_SIZE * 2];
	int size1 , size2 ;
	cout << "please cin size1" << endl;;
	cin >> size1;
	if (size1 > MAX_SIZE)cout << "请重新输入";
	else {
		cout << "piease cin list1" << endl;
		for (int i = 0; i < size1; i++) {
			cin >> list1[i];
		}
	}
	cout << "please cin size2" << endl;
	cin >> size2;
	if (size2 > MAX_SIZE)cout << "请重新输入";
	else {
		cout << "piease cin list2" << endl;
		for (int i = 0; i < size2; i++) {
			cin >> list2[i];
		}
	}
	merge(list1, size1, list2, size2, list3);
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << " ";
	}
	return 0;
}
int indexOf(const string& s1, const string& s2) {
	int length1 = s1.length();
	int length2 = s2.length();
	if (length1 > length2 || length1 == 0)return -1;
	for (int i = 0; i <= length2 - length1; i++) {
		int j;
		for (j = 0; j < length1; j++) {
			if (s1[j] != s2[j + i])break;
		}
		if (j == length1) { return i; }
		
	}
	return -1;
}
int main() {
	cout << "please cin a string" << endl;
	string s1,s2;
	getline(cin, s1);
	cout << "please cin a string" << endl;
	getline(cin, s2);
	int pos=indexOf(s1, s2);
	cout << "indexOf(" << "“" << s1 << "”, " << "“" << s2 << "”)" << "is" << pos << endl;
}endendendend
void vcount(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) { counts[i] = 0; }
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		char ch = s[i];
		if (isalpha(ch)) {
			char lower_ch = tolower(ch);
			int index = lower_ch - 'a'; counts[index]++;
		}
	}
}
int main() {
	char str[100];
	int counts[26];
	cout << "请输入字符串：";
	cin>>str;
	vcount(str, counts);
	cout << "字母出现次数：" << endl;
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << (char)('a' + i) << counts[i] << endl;
		}
	}
	return 0;
}
void main()
{
int i, j, * pi, * pj;     //此处的*表示定义指针变量，而非间接运算符
pi = &i;
pj = &j;
i = 5; j = 7;
cout << i << '/t' << j << '/t' << pi << '/t' << pj;
cout << &i << '/t' << *&i << '/t' << &j << '/t' << *&j;
	}
int main()   //C语言程序，要了解
{
	int a[] = { 1,2,3 };
	int* p, i;
	p = a;    //将数组a首地址送给p
	for (i = 0; i < 3; i++)
		printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));  //与cout功能差不多
}
int* f()
{
	int* list = new int[4]{ 1,2,3,4 };
	return list;
}
int main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[] p;
	return 0;
}
#include <iostream>
#include <cstring>  
using namespace std;


int parseHex(const char* hexString) {
	int decimal_num = 0;  
	int str_len = strlen(hexString);  


	for (int i = 0; i < str_len; i++) {
		char ch = hexString[i];  
		int num;  

	
		if (ch >= '0' && ch <= '9') {
			num = ch - '0'; 
		}
	
		else if (ch >= 'A' && ch <= 'F') {
			num = ch - 'A' + 10;  
		}
		
		else if (ch >= 'a' && ch <= 'f') {
			num = ch - 'a' + 10;  
		}
		
		else {
			cout << "输入了非法字符：" << ch << endl;
			return 0;
		}

		
		decimal_num = decimal_num * 16 + num;
	}

	return decimal_num;
}

int main() {
	char hex_str[100]; 

	cout << "请输入十六进制字符串（支持0-9、A-F、a-f）：";
	cin >> hex_str;


	int result = parseHex(hex_str);

	cout << "转换后的十进制数是：" << result << endl;

	cout << "\n测试：parseHex(\"A5\")的结果是：" << parseHex("A5") << endl;

	return 0;
}*/
#include <iostream>
using namespace std;
void sortArray(int* arr, int n) {	
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (*(arr + j) > *(arr + j + 1)) {
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}

int main() {
	int n;
	cout << "请输入数组元素的个数：";
	cin >> n;
	int* arr = new int[n]; 
	cout << "请输入" << n << "个整数（用空格分开）：" << endl;
	for (int i = 0; i < n; i++) {
		
		cin >> *(arr + i);
	}
	sortArray(arr, n);
	cout << "排序后的结果（从小到大）：" << endl;
	for (int i = 0; i < n; i++) {
		cout << *(arr + i) << " "; 
	}
	cout << endl;
	delete[] arr; 
	arr = nullptr;

	return 0;
}