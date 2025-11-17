#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//1 改代码
	int k = 0;
		int i = k + 1;
		cout << i++ << endl;
		int j = 1;
		cout << j++ << endl;
		cout << "Welcome to C++" << endl;
	//3.验证长度
		cout << "int length:" << sizeof(int) << endl;
		cout << "long length:" << sizeof(long) << endl;
		cout << "char length:" << sizeof(char) << endl;
	//4.测试
		unsigned int testUnint = 65534;
		cout << "output in unsigned int  type:"<<testUnint << endl;//<<oct
		cout << "output in char type:" << static_cast<char>(testUnint) << endl;
		cout <<"output in short type:"<< static_cast <short>(testUnint) << endl;//-2
		cout <<"output in int type:"<<static_cast <int>(testUnint) << endl;
		cout <<"output in double type:"<< static_cast <double>(testUnint) << endl;
		cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
		cout << "output in Hex unsigned int type:" << hex << testUnint << endl; 
	//5.温度
		double f;
		cout << "请输入一个华氏温度" << endl;
		cin >> f;
		double c = 5.0 / 9.0 * (f - 32);//5/9是整数除法，结果取整为0,5.0/9.0为浮点数除法结果取精确0.555...
		cout << "对应的摄氏温度为：" <<fixed <<setprecision(2)<< c << endl;
			
		return 0;
}