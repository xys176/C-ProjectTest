#include<iostream>
using namespace std;

#define day 7

//常亮的定义方式
//1.#detine修饰的宏常亮
//2.const修饰的变量


int main() {
	const int mouth = 12;
	cout << "一周有" << day << "天"<<endl;
	cout << "一年" << mouth << "月"<<endl;
	system("pause");
}