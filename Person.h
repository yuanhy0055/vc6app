#pragma once

#ifndef INTERFACE_DEFINE_AND_REALIZE  
#define INTERFACE_DEFINE_AND_REALIZE  
#include <string>  
using std::string;  

//define interface
class Person
{
public:
	Person():m_StrName("###") //��Ա�б��ʼ������  
	{};  
	virtual ~Person(){};  
	virtual void Eat()=0;//����Ҫ�Զ���  
	virtual void Sleep()=0;//����Ҫ˯��  
	virtual void SetName(const string strName)=0;//�˶�������  
	virtual string GetName()=0;//��ȡ����  
	virtual void Work()=0;//�˿���Ҫ�й���  

private:  
	string m_StrName;  
};


//ʵ�ֽӿ�  
//ʵ�ֽӿ���ͨ��������ʵ�ֵģ�ÿ�����������������ص㣬���Ի�ȡͬһ�ӿڵĲ�ͬʵ��  
//Ҳ������ν�Ķ�̬  
class Student:public Person  
{  
public:  
	Student():m_strName("***")  
	{};  
	~Student()  
	{};  
	void Eat();  
	void Sleep();  
	void SetName(const string strName);  
	string GetName();  
	void Work();  
private:  
	string m_strName;  
};

#endif