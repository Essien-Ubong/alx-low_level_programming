#include "main.h"

/**
 * print_array - printa an array of integers, followed by a new line
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma, followed by a space
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}


