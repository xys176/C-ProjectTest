#pragma once
#include<iostream>
#include"identity.h"
using namespace std;

//管理员类
class Manager :public Identity
{
public:
	//默认构造函数
	Manager();
	//有参构造函数
	Manager(string name, string pwd);
	//登录界面
	void operMenu();
	//添加账号
	void addPerson();
	//查看账号
	void showPerson();
	//查看机房的信息
	void showComputer();
	//清空预约记录
	void cleanFile();
};