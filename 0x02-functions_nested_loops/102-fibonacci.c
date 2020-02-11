
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int n1, n2, sum;

	n1 = 1;
	n2 = 2;
	sum = 0;

	printf("%lu, ", n1);
	printf("%lu, ", n2);

	for (i = 3; i <= 50; ++i)
	{
	sum = n1 + n2;
	n1 = n2;
	n2 = sum;
	printf("%lu", sum);
	if (i == 50)
		break;
	printf(", ");
	}
	printf("\n");
	return (0);
}
