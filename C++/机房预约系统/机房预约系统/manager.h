#pragma once
#include<iostream>
#include"identity.h"
using namespace std;

//����Ա��
class Manager :public Identity
{
public:
	//Ĭ�Ϲ��캯��
	Manager();
	//�вι��캯��
	Manager(string name, string pwd);
	//��¼����
	void operMenu();
	//����˺�
	void addPerson();
	//�鿴�˺�
	void showPerson();
	//�鿴��������Ϣ
	void showComputer();
	//���ԤԼ��¼
	void cleanFile();
};