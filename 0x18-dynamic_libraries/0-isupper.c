#include "main.h"
/**
*_isupper - determins if uppercase
*
*@c: parameter integer
*
*Return: 1 if uppercase else 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
