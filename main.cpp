//#include <stdio.h>
#include <iostream>
#include <windows.h>	//yuanyuan for OutputDebugString()
#include <list>

using namespace std;

#include "Game1.h"
typedef list<int> LL;

int ch1_main();

int main(void)
{
	ch1_main();
	system("pause");

	//printf("Hello, world!\n");
	//cout << "Hello" << "world, C++!" << endl;
	OutputDebugString("***HelloDebugString()***\n");

	Game1 *gm = new Game1();

	LL list2(10,6);
	list2.push_back(5);

	LL::iterator ii;
	for(ii=list2.begin();ii!=list2.end();ii++) {
		cout << *ii << endl;
	}

	delete gm;

	return 0;
}
