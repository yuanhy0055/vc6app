#include <iostream>  
#include "Person.h"    //"InterfaceDefineAndRealize.h"  

bool _declspec(dllimport) GetPersonObject(void** _RtObject);  

int person_main()  
{  
	Person* person=NULL;
	void* pObj=NULL;
	if(GetPersonObject(&pObj))//调用接口  
	{  
		person=(Person*)pObj;  
		person->Eat();  
		person->Sleep();  
		person->SetName("zhang hui");  
		std::cout<<person->GetName()<<std::endl;  
		person->Work();  

		if(person!=NULL)  
		{  
			delete person;  
			person=NULL;  
		}  
	}  
	system("pause");  
	return 0;  
}  