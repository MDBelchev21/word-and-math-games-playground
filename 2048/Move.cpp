#include<iostream>
#include "Move.h"
using namespace std;

int upMove(int body[4][4])
{
	/* MOVE UP FUNCTION */
	int x, y;
	for (int j = 0; j < 4; j++)
	{
		x = 0;
		y = j;
		for (int i = 1; i < 4; i++)
		{
			if (body[i][j] != 0)
			{
				if (body[i - 1][j] == 0 || body[i - 1][j] == body[i][j])
				{
					if (body[x][y] == body[i][j])
					{
						body[x][y] += body[i][j];
						body[i][j] = 0;
					}
					else
					{
						if (body[x][y] == 0)
						{
							body[x][y] += body[i][j];
							body[i][j] = 0;
						}
						else
						{
							body[x + 1][y] += body[i][j];
							body[i][j] = 0;
						}
					}
				}
				else
					x++;
			}
		}
	}
	return 0;
}

int downMove(int body[4][4])
{
	/* MOVE DOWN FUNCTION */
	int x, y;
	for (int j = 0; j < 4; j++)
	{
		x = 3;
		y = j;
		for (int i = 2; i >= 0; i--)
		{
			if (body[i][j] != 0)
			{
				if (body[i + 1][j] == 0 || body[i + 1][j] == body[i][j])
				{
					if (body[x][y] == body[i][j])
					{
						body[x][y] += body[i][j];
						body[i][j] = 0;
					}
					else
					{
						if (body[x][y] == 0)
						{
							body[x][y] += body[i][j];
							body[i][j] = 0;
						}
						else
						{
							if(body)
							body[x - 1][y] += body[i][j];
							body[i][j] = 0;
						}
					}
				}
				else
					x--;
			}
		}
	}
	return 0;
}

int leftMove(int body[4][4])
{
	/* MOVE LEFT FUNCTION */
	int x, y;
	for (int i = 0; i < 4; i++)
	{
		x = i;
		y = 0;
		for (int j = 1; j < 4; j++)
		{
			if (body[i][j] != 0)
			{
				if (body[i][j - 1] == 0 || body[i][j - 1] == body[i][j])
				{
					if (body[x][y] == body[i][j])
					{
						body[x][y] += body[i][j];
						body[i][j] = 0;
					}
					else
					{
						if (body[x][y] == 0)
						{
							body[x][y] += body[i][j];
							body[i][j] = 0;
						}
						else
						{
							body[x][y + 1] += body[i][j];
							body[i][j] = 0;
						}
					}
				}
				else
					y++;
			}
		}
	}
	return 0;
}

int rightMove(int body[4][4])
{
	/* MOVE RIGHT FUNCTION */
	int x, y;
	for (int i = 0; i < 4; i++)
	{
		x = i;
		y = 3;
		for (int j = 2; j >= 0; j--)
		{
			if (body[i][j] != 0)
			{
				if (body[i][j + 1] == 0 || body[i][j + 1] == body[i][j])
				{
					if (body[x][y] == body[i][j])
					{
						body[x][y] += body[i][j];
						body[i][j] = 0;
					}
					else
					{
						if (body[x][y] == 0)
						{
							body[x][y] += body[i][j];
							body[i][j] = 0;
						}
						else
						{
							body[x][y - 1] += body[i][j];
							body[i][j] = 0;
						}
					}
				}
				else
					y--;
			}
		}
	}
	return 0;
}