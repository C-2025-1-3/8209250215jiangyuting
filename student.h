#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;
class Student              
{
public:                   
	void display();
	void set_value(int n, const char* na, char s);
private:
	int num;
	char name[20];
	char sex;
}; 
#endif