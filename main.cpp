#include <stdio.h>
#include <iostream>
#include <windows.h>	//yuanyuan for OutputDebugString()

using namespace std;

int yymain(void)
{
	cout << "Hello" << "world, C++!" << endl;
	printf("Hello, world!\n");
	OutputDebugString("***HelloDebugString()***\n");

	return 0;
}
