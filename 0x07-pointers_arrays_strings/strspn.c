#include "main.h"

/**
 * _strspn - the of the prefix substring
 *
 * @s: String
 * @accept: the list of characters to match
 * Return: number of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int i,j,f;
	
	f = 0;
		for(i = 0; s[i] != '\0'; i++)
		{
		
			for(j = 0; accept[j] != '\0'; j++)
			{
				if(s[i] == accept[j])
				{
					f++;
					break;
				}
				else if (accept[j + 1] == '\0')
					return (f);
			}
		}
return (f);
	
}

