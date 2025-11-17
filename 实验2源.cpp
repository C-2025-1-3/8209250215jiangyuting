#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
	//1
	//char ch;
	//cout << "请输入一个字符" << endl;
	//cin >> ch;
	//if(ch>='a'&&ch<='z')
	//{
		//cout << (char)(ch - 32) << endl;
	//}
	//else {
		//cout << (int)(ch + 1) << endl;
	//}

		//2
		//double x;
		//cout << "请输入x的值" << endl;
		//cin >> x;
		//if (x>0&&x<10)//不支持0<x<10的写法
		//{
		//	if (x >= 1) {
			//	if (x < 5) {
			//		cout << 2 / (4 * x) + 1 << endl;
			//	}
			//	else
			//	{
			//		cout << x * x << endl;
			//	}
			//}
			//else 
			//{
			//cout << 3 - 2 * x << endl;
			//}
		//}
	//3
	//double a, b, c;
	//cout << "请输入三角形的3条边长" << endl;
	//cin >> a >> b >> c;
	//if (a + b > c && a + c > b && b + c > a)
	//{
	//	cout << "它的周长为" << a + b + c << endl;
	//if (a == b || b == c || a == c) {
	//		cout << "这是一个等腰三角形" << endl;
	//	}
	//	else
	//	{
	//		cout << "这不是一个等腰三角形" << endl;
	//	}
	//}
	//else {
	//	cout << "无法构成三角形" << endl;
	//}
	//4
	//double num1, num2;
	//char op;
	//cout << "输入第1个操作数" << endl;
	//cin >> num1;
	//cout << "输入操作符" << endl;
//cin >> op;
	//cout << "输入第2个操作数" << endl;
	//cin >> num2;
	//switch (op)
	//{
	//case '+':cout << num1 + num2 << endl;
	//	break;
	//case '-':cout << num1 - num2 << endl;
	//break;
	//case '*':cout << num1 * num2 << endl;
	//	break;
	//case '/':if (num2 != 0) {
	//	cout << num1 / num2 << endl;
	//}
	//		else { cout << "除数不可以为0" << endl; }
		//	break;
	//default:cout << "操作符非法" << endl;
	//}
	//5
	//cout << "请输入一串字符" << endl;
	//int letter = 0, number = 0, space = 0, other = 0;
	//char c;
	//while ((c = getchar()) != '\n') {
	///	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
	//		letter++;
	//	}
	//	else if (c == ' ') {
	//		space++;
	//	}
	//	else if (c >= '0' && c <= '9') {
	//		number++;
	//	}
	//	else {
	//		other++;
	//	}
	//}
	//cout << "英文字母的个数为" << letter << endl;
	//cout << "空格的个数为" << space << endl;
	//cout << "数字的个数为" << number << endl;
	//cout << "其他字符的个数为" << other << endl;

	///6
	//int c, d,e,f;
	//cout << "输入两个正整数" << endl;
	//cin >> c >> d;
	//最大公约数
//if(c>=d){
		//f = d;
		//for (1; c % f != 0 || d % f != 0; f--);
		//cout << "最大公约数为" << f << endl;
	//}
	//else {
//f = c;
		//for (1; c % f != 0 || d % f != 0; f--);
		//cout << "最大公约数为" << f << endl;
	//}
	//最小公倍数
	//if (c >= d) {
	//	e = c;
		///for (1;e%c!=0||e%d!=0;e++);
		//cout << "最小公倍数为" << e << endl;
	//}
	//else {
		//e = d;
		//for (1; e % c != 0 || e % d != 0; e++);
		//cout << "最小公倍数为" << e << endl;
	//}
	//7：
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5-1-i; j++)
		{
			cout << ' ' ;
		}
		for (int k = 0; k<i+1; k++)
		{
		cout << '*' ;
		}
		cout << endl;
	}
    //8
	//思考：（1）如果输入a为负，在运行时会出现什么情况 ? 修改程序使之能处理任何的a值。
	//(2）能否 | xn + 1 - xn | < 10 - 10或更小 ? 为什么 ? 请试一下。
//double a,y,diff;
//cout << "请输入a的取值" << endl;
//cin >> a;
//if (a < 0)
//{
	//cout << "a的值不能为负" << endl;
//}
//else {
//if (a < 0) {
//}
	//double x = sqrt(a);//a^1.0/2.0输入是错误的
	//y = 1.0 / 2.0 * (x + a / x);
	//diff = fabs(x - y);
	//while (diff>=1e-10)
	//{
	//	x = y;
	//	y = 1.0 / 2.0 * (x + a / x);
	//	diff = fabs(x - y);
	//}
	//cout << fixed << setprecision(10) << a << "的平方根是" << y << endl;
//}






//9苹果每个0.8元，第一天买2个，第二天开始，每天买前天的2倍，直到购买的苹果数不超过100的最大值，求每天平均花多少钱。
//int i = 2, day = 0;
//double sum=0;
//while (i <= 100)
//{
	//double j = 0.8 * i;
	//cout << "花了" <<j << "元" << endl;
	//sum = sum + j;
	//i = i * 2;
	//day++;
//}
//double k =day;
//cout << "平均花费了" << sum / k << "元" << endl;

		return 0;

	}