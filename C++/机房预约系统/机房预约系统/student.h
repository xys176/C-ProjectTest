#pragma once
#include<iostream>
using namespace std;
#include "identity.h"

//学生类
class Student :public Identity
{
public:
	//默认构造函数
	Student();
	//有参构造函数,学号，姓名，密码
	Student(int id,string name,string pwd);
	//菜单界面
	void operMenu();
	//申请预约
	void applyOrder();
	//查看自己的预约
	void showMyorder();
	//查看所有人的预约
	void showAllOrder();
	//取消预约
	void canceOrder();
	//学生学号
	int m_Id;
};