//#include <stdio.h>
#include <iostream>
#include <windows.h>	//yuanyuan for OutputDebugString()

using namespace std;

#include "Game1.h"

int main(void)
{
	//printf("Hello, world!\n");
	//cout << "Hello" << "world, C++!" << endl;
	OutputDebugString("***HelloDebugString()***\n");

	Game1 *gm = new Game1();

	//LL list2(10,6);

	delete gm;

	return 0;
}
