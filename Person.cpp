#include "Person.h"

/*
Person::Person(void){}

Person::~Person(void){}
*/

#include <iostream>  
#include <string>  
using std::string;  
using std::cout;  
using std::endl;  

//�ӿڵ��ⲿʵ��  
void Student::Sleep()  
{  
	cout<<"student sleep."<<endl;  
}  
void Student::Eat()  
{  
	cout<<"student eat."<<endl;  
}  
void Student::SetName(const string strName)  
{  
	m_strName=strName;  
}  
void Student::Work()  
{  
	cout<<"student work."<<endl;  
}  
string Student::GetName()  
{  
	return m_strName;  
}  
//��Ҫ�����ĺ��������û����ⲿ���Ե��õĽӿ�  
_declspec(dllexport)bool GetPersonObject(void** _RtObject)  
{  
	Person* pMan=NULL;  
	pMan=new Student();  
	*_RtObject=(void*)pMan;  
	return true;  
}