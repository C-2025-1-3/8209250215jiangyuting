#include <iostream>
using namespace std;
#include<string>
/*class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void putin() {
		cin >> hour >> minute >> sec;
	}
	void putout() {
		cout << hour << "：" << minute << "：" <<sec << endl;
	}
};

class square {
private:
	int length, width, heigth;
public:
	void shuru() {
		cin >> length >> width >> heigth;
	}
	int calculate() {
		return length * width * heigth;
	}
	void shuchu() {
		cout << "该长方柱的体积为： " << calculate() << endl;
	}
};
int main() {
	square c1, c2, c3;
	cout << "输入第一个长方柱的长宽高" << endl;
	c1.shuru();
	cout << "输入第二个长方柱的长宽高" << endl;
	c2.shuru();
	cout << "输入第三个长方柱的长宽高" << endl;
	c3.shuru();
	c1.calculate(); c2.calculate(); c3.calculate();
	c1.shuchu(); c2.shuchu(); c3.shuchu();
}

struct student {
	string id;
	float score;
};
student find(student list[], int len) {
	student top = list[0];
	for (int i = 0; i < len; i++) {
		if (list[i].score > top.score) {
			top = list[i];
		}
	}
	return top;
}
int main() {
	const int num = 5;
	student list[num];
	for (int i = 0; i < num; i++) {
		cin >> list[i].score >> list[i].id;
	}
	student top = find(list, num);
	cout << "成绩最高的学生的id是： " << top.id << "成绩最高的学生的成绩是： " << top.score;
	return 0;
}
*/
class Point {
private:
	int x;
	int y;
public:
	Point() {
		x = 60;
		y = 80;

	}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout <<"("<< x << "," << y<<")";
	}
};
int main() {
	Point p1;
	cout << "初始化坐标" ;
	p1.display();
	cout<<endl;
	p1.setPoint(10, 10);
	cout << "修改后坐标" ;
	p1.display();
}