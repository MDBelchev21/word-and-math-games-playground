#include <iostream>
#include "Check.h"
using namespace std;

bool checkOver(int body[4][4])
{
	bool flag = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (body[i][j] == 0)
			{
				flag = 1;
				break;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (body[i + 1][j] == body[i][j] || body[i][j + 1] == body[i][j])
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}