// ilyinLR7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdlib.h>

extern "C" int P1();

int _tmain(int argc, _TCHAR* argv[])
{
	int L;
	L=P1();

	printf("%d", L);

	printf("\n");
	system("pause");

	return 0;
}

