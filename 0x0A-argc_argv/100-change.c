#include <stdio.h>
#include <stdlib.h>

/**
 * isInt - Checkes if s is an integer
 * @s: string to validate
 * Return: Always 0. (Success)
 * otherwise: Always 1.
 */
int isInt(char *s)
{
	int i = 0;
	
	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: arguement count
 * @argv: arguement vector.
 * Return: Always 0.(Success)
 */
int main(int argc, char *argv[])
{
	int i = 0, coinUsed = 0, coin = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if(argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if(isInt(argv[1]))
	{
		i = atoi(argv[1]);
		while(i > 0 && coin <=4)
		{
			if(i >= coins[coin])
			{
				i -= coins[coin];
				coinUsed++;
			}
			else
				coin++;
		}
	}
	printf("%i\n", coinUsed);
	return (0);
}
